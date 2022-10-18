#include <iostream>

extern "C"
{
	int __stdcall getmin(int*, int);
	int __stdcall getmax(int*, int);
}

int main()
{
	int arr[10] = { 3, -12, 68, 84, -77, 90, 1, -45, 9, 54 };
	int min = 0, max = 0, sum = 0;
	min = getmin(arr, 10);
	max = getmax(arr, 10);
	sum = min + max;
	std::cout << "getmax + getmin = " << sum << std::endl;
}