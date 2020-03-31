#include <iostream>
#include <vector>

#define NO_ELEM -1

int binary_search(std::vector<int> array, int val)
{
	int right = array.size(), left = 0;
	while (left <= right)
	{
		int middle = (right + left) / 2;
		if (array[middle] == val)
			return middle;
		if (array[middle] > val)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return NO_ELEM;
}

int recursive_binary_search(std::vector<int> array, int val, int left, int right)
{
	if (left > right)
		return NO_ELEM;
	int middle = (right + left) / 2;
	if (array[middle] == val)
		return middle;
	if (array[middle] > val)
		return recursive_binary_search(array, val, left, middle - 1);
	else
		return recursive_binary_search(array, val, middle + 1, right);
}

int main()
{
	std::vector<int> array = {0, 1, 2, 3, 4, 5};
	int result1 = binary_search(array, 3);
	if (result1 == NO_ELEM)
		printf("First result - there is no such element!\n");
	else
		printf("First result - %d\n", result1);
	int result2 = recursive_binary_search(array, 3, 0, array.size());
	if (result2 == NO_ELEM)
		printf("First result - there is no such element!\n");
	else
		printf("First result - %d\n", result2);
	return 0;
}