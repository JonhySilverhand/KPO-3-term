#include <iostream>
#include <string>
using namespace std;
bool PolishNotation(char*, string&);

int main()
{
	setlocale(LC_ALL, "Rus");
	char mas[100];
	cout << "������� ������: ";
	cin.getline(mas, 100);
	string resultstr;
	
	if (PolishNotation(mas, resultstr))
	{
		cout << "������ ����� ��������������: " << resultstr << endl;
	}
	else
	{
		cout << "������ �� �������������(�������� ����)" << endl;
	}
	
	system("pause");
	return 0;
}