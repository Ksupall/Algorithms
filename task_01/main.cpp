#include <iostream>
#include "sorting.hpp"
#include <vector>

int main()
{
	int amount = 5;
	std::vector<int> arr(amount);
	arr = {-1, 5, 7, -50, 155};
	sorting(amount, arr);
	std::cout << std::endl;
	/*
	for (int i = 0; i < amount; ++i)
		std::cout << arr[i] << " ";
	*/
	return 0;
}