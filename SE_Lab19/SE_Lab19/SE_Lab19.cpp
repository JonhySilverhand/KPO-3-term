#include "stdafx.h"
#include "FST.h"

int _tmain(int argc, TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	char str1[] = "abcdbefdbgd";
	char str2[] = "abcdbffdbbgd";
	char str3[] = "abbcdbbbeffffdbbbbbgd";
	char str4[] = "abbbbgd";
	char str5[] = "abbbbbcdbbfdbgd";
	char str6[] = "abbbbbgd";
	char str7[] = "abcdefdbgd";
	char str8[] = "acdbgd";
	char str9[] = "abcdbedbgd";
	//a(b)+(cd(b)*(e | b + (f+))d)*b + gd
	FST::FST fst1(str1,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
		);
	if (FST::execute(fst1))
		std::cout << "������� " << fst1.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst1.string << " �� ����������" << std::endl;

	FST::FST fst2(str2,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst2))
		std::cout << "������� " << fst2.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst2.string << " �� ����������" << std::endl;

	FST::FST fst3(str3,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst3))
		std::cout << "������� " << fst3.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst3.string << " �� ����������" << std::endl;

	FST::FST fst4(str4,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst4))
		std::cout << "������� " << fst4.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst4.string << " �� ����������" << std::endl;

	FST::FST fst5(str5,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst5))
		std::cout << "������� " << fst5.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst5.string << " �� ����������" << std::endl;

	FST::FST fst6(str6,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst6))
		std::cout << "������� " << fst6.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst6.string << " �� ����������" << std::endl;

	FST::FST fst7(str7,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst7))
		std::cout << "������� " << fst7.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst7.string << " �� ����������" << std::endl;

	FST::FST fst8(str8,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10))
	);
	if (FST::execute(fst8))
		std::cout << "������� " << fst8.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst8.string << " �� ����������" << std::endl;

	FST::FST fst9(str9,
		11,
		FST::NODE(1, FST::RELATION('a', 1)),
		FST::NODE(1, FST::RELATION('b', 2)),
		FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('b', 7)),
		FST::NODE(1, FST::RELATION('d', 4)),
		FST::NODE(3, FST::RELATION('b', 4), FST::RELATION('b', 5), FST::RELATION('e', 5)),
		FST::NODE(2, FST::RELATION('b', 5), FST::RELATION('f', 6)),
		FST::NODE(2, FST::RELATION('f', 6), FST::RELATION('d', 7)),
		FST::NODE(1, FST::RELATION('b', 8)),
		FST::NODE(2, FST::RELATION('b', 8), FST::RELATION('g', 9)),
		FST::NODE(1, FST::RELATION('d', 10)),
		FST::NODE()
	);
	if (FST::execute(fst9))
		std::cout << "������� " << fst9.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst9.string << " �� ����������" << std::endl;

	/*char str1[] = "aaabbbaba";
	char str2[] = "aaabbbabba";
	FST::FST fst1(
			str1,
			4,
			FST::NODE(3, FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('a', 1)),
			FST::NODE(1, FST::RELATION('b', 2)),
			FST::NODE(1, FST::RELATION('a', 3)),
			FST::NODE()
		);
	if (FST::execute(fst1))
		std::cout << "������� " << fst1.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst1.string << " �� ����������" << std::endl;
	
	FST::FST fst2(
			 str2,
			 4,
			 FST::NODE(3, FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('a', 1)),
			 FST::NODE(1, FST::RELATION('b', 2)),
			 FST::NODE(1, FST::RELATION('a', 3)),
			 FST::NODE()
				);
	if (FST::execute(fst2))
		std::cout << "������� " << fst2.string << " ����������" << std::endl;
	else
		std::cout << "������� " << fst2.string << " �� ����������" << std::endl;*/
	system("pause");
	return 0;
}