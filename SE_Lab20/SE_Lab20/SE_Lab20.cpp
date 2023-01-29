#include "stdafx.h"
#include "Error.h"
#include "Parm.h"
#include "Log.h"
#include "In.h"
#include "Out.h"
#include "LexAnalisis.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	//////////////////////////////////////---ERROR---///////////////////////////////////////////////////////////////////////////////
	//cout << "---- ���� Error::geterror ----" << endl << endl;
	//try
	//{
	//	throw ERROR_THROW(1);
	//}
	//catch (Error::ERROR e)
	//{
	//	cout << "������ " << e.id << ": " << e.message << endl << endl;
	//}
	//cout << "---- ���� Error::geterror ----" << endl << endl;
	//try
	//{
	//	throw ERROR_THROW_IN(112, 7, 7);
	//}
	//catch (Error::ERROR e)
	//{
	//	cout << "������ " << e.id << ": " << e.message << ", ������ " << e.inext.line << ", ������� " << e.inext.col << endl << endl;
	//}
	///////////////////////////////////////////---PARM---///////////////////////////////////////////////////////////////////////////////////
	//cout << "---- ���� Parm::getparm ----" << endl << endl;
	//try {
	//	Parm::PARM parm = Parm::getparm(argc, argv);
	//	wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
	//}
	//catch (Error::ERROR e)
	//{
	//	cout << "������ " << e.id << ": " << e.message << endl << endl;
	//}
	//////////////////////////////////////////////---IN---/////////////////////////////////////////////////////////////////////////////////
	//cout << "---- ���� In::getin ----" << endl << endl;
	//try
	//{
	//	Parm::PARM parm = Parm::getparm(argc, argv);
	//	In::IN in = In::getin(parm.in);
	//	cout << in.text << endl;
	//	cout << "����� ��������: " << in.size << endl;
	//	cout << "����� �����: " << in.lines << endl;
	//	cout << "���������: " << in.ignor << endl;
	//}
	//catch (Error::ERROR e)
	//{
	//	cout << "������ " << e.id << ": " << e.message << endl;
	//	cout << "c����� " << e.inext.line << " ������� " << e.inext.col << endl << endl;
	//}
	//////////////////////////////////////////---LOG---//////////////////////////////////////////////////////////////////////////////////
	//Log::LOG log = Log::INITLOG;
	//try
	//{
	//	Parm::PARM parm = Parm::getparm(argc, argv);
	//	log = Log::getlog(parm.log);
	//	Log::WriteLine(log, (char*)"����:", (char*)" ��� ������ \n", "");
	//	Log::WriteLine(log, (wchar_t*)L"����:", (wchar_t*)L" ��� ������ \n", L"");
	//	Log::WriteLog(log);
	//	Log::WriteParm(log, parm);
	//	In::IN in = In::getin(parm.in);
	//	Log::WriteIn(log, in);
	//	Log::Close(log);
	//}
	//catch (Error::ERROR e)
	//{
	//	Log::WriteError(log, e);
	//}
	//////////////////////////////////////---OUT---////////////////////////////////////
	//Out::OUT out = Out::INITOUT;
	//try {
	//	Parm::PARM parm = Parm::getparm(argc, argv);
	//	out = Out::getout(parm.out);
	//	In::IN in = In::getin(parm.in);
	//	Out::File(out, in);
	//	Out::Close(out);
	//}
	//catch (Error::ERROR e)
	//{
	//	Out::WriteError(out, e);
	//}


	Log::LOG log = Log::INITLOG;
	Out::OUT out = Out::INITOUT;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		out = Out::getout(parm.out);
		Log::WriteLine(log, (char*)"����:", (char*)" ��� ������ \n", "");
		Log::WriteLine(log, (wchar_t*)L"����:", (wchar_t*)L" ��� ������ \n", L"");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);
		Out::File(out, in);
		LT::LexTable lexTable;
		IT::IdTable	idTable;

		LA::FindLex(in, lexTable, idTable);

		lexTable.PrintLexTable(L"TableOfLexems.txt");
		idTable.PrintIdTable(L"TableOfIdentificators.txt");

		LT::Delete(lexTable);
		IT::Delete(idTable);
		Log::Close(log);
		Out::Close(out);
	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
		Out::WriteError(out, e);
		cout << "������" << endl;
	}
	system("pause");
	return 0;
}