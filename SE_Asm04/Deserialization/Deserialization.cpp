#include "stdafx.h"

void Deserialization::DeserializationData()
{
	file = ifstream("D:\\Лабораторные\\3_семестр\\КПО\\SE_Asm04\\SE_Asm04\\bin.bin");
	unsigned char label;
	unsigned char Lenght;

	while (!file.eof())
	{
		file.read(reinterpret_cast<char*>(&label), 1);
		file.read(reinterpret_cast<char*>(&Lenght), 1);
		
		if(label == 0x01)
			file.read(reinterpret_cast<char*>(&s), Lenght);
		if(label == 0x02)
			file.read(reinterpret_cast<char*>(&us), Lenght);
	}
	cout << s << " " << us << endl;
	file.close();
}

void Deserialization::ConvertToAsm()
{
	fileAsm = ofstream("D:\\Лабораторные\\3_семестр\\КПО\\SE_Asm04\\AssemblyTest\\Test.asm");
	fileAsm.clear();

	fileAsm asm_head;

	fileAsm << "SHORT1	SWORD " << s << endl;
	fileAsm << "USHORT	DW " << us << endl;

	fileAsm asm_footer;
	fileAsm.close();
}