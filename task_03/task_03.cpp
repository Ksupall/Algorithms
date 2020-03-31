#include <iostream>
#include <vector>

#define NO_ELEM -1

// обычный линейный поиск
int lineal_search(std::vector<int> array, int val)
{
	int len = array.size();
	for (int i = 0; i < len; i++)
	{
		if (array[i] == val)
			return i;
	}
	
	return NO_ELEM;
}

// модифицированный линейный поиск
int modified_linear_search(std::vector<int> array, int val)
{
	int len = array.size();
	int last = array[len];
	array[len] = val;
	int i = 0;
	while (array[i] != val)
		i++;
	array[len] = last;
	if (i < len || array[len] == val)
		return i;
	return NO_ELEM;
}

int main()
{
	std::vector<int> array = {1, 8, -5, 12, 15, -96, 0, 11};
	int result1 = lineal_search(array, 111);
	if (result1 == NO_ELEM)
		printf("Result 1 - there is no such element!\n");
	else
		printf("Result 1 - %d\n", result1);
	int result2 = modified_linear_search(array, 111);
	if (result2 == NO_ELEM)
		printf("Result 2 - there is no such element!\n");
	else
		printf("Result 2 - %d\n", result2);
	return 0;
}