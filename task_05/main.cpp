#include <iostream>
#include <vector>

// сортировка выбором
void selection_sort(std::vector<int> &array)
{
	int amount = array.size();
	for (int i = 0; i < amount - 1; i++)
	{
		int smallest = i;
		for (int j = i + 1; j < amount; j++)
		{
			if (array[j] < array[smallest])
				smallest = j;
		}
		std::swap(array [i], array[smallest]);
	}
}

int main()
{
	std::vector<int> array = {4, -5, 13, -15, 1};
	selection_sort(array);
	for (int i = 0; i < array.size(); i++)
		std::cout << array[i] << " ";
	return 0;
}