#include <iostream>

extern "C"
{
	int getmin(int* mas, int size)
	{
		int min = INT_MAX;
		for (int i = 0; i < size; i++)
		{
			if (mas[i] < min)
				min = mas[i];
		}
		return min;
	}

	int getmax(int* mas, int size)
	{
		int max = INT_MIN;
		for (int i = 0; i < size; i++)
		{
			if (mas[i] > max)
				max = mas[i];
		}
		return max;
	}
}