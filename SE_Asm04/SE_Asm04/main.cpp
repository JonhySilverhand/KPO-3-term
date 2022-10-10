#include "stdafx.h"

using namespace std;

int main()
{
	short s;
	unsigned short us;
	cout << "short type: ";
	cin >> s;
	cout << "unsigned short type: ";
	cin >> us;

	Serialization serialization(s, us);
	serialization.SerealizationData();

	system("pause");
	return 0;
}