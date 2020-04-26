#include <iostream>
#include "sorting.hpp"

// сортировка вставками
void sorting(int amount, std::vector<int> &arr)
{
	for (int i = 1; i < amount; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			arr[j] = key;
			j--;
		}
	}
}