#include <iostream>
#include <string>
using namespace std;
bool PolishNotation(char*, string&);

int main()
{
	setlocale(LC_ALL, "Rus");
	char mas[100];
	cout << "Введите строку: ";
	cin.getline(mas, 100);
	string resultstr;
	
	if (PolishNotation(mas, resultstr))
	{
		cout << "Строка после преобразований: " << resultstr << endl;
	}
	else
	{
		cout << "Строка не преобразована(Неверный ввод)" << endl;
	}
	
	system("pause");
	return 0;
}