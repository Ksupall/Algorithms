#include <iostream>
#include "sorting.hpp"

int main()
{
	int amount = 0;
	/*
	std::cout << "Enter amount of elements: ";
	std::cin >> amount;
	*/
	std::vector<int> arr(amount);
	/*
	for (int i = 0; i < amount; ++i)
		std::cin >> arr[i];
	*/
	amount = 5;
	arr = {-1, 5, 7, -50, 155};
	sorting(amount, arr);
	std::cout << std::endl;
	for (int i = 0; i < amount; ++i)
		std::cout << arr[i] << " ";
	return 0;
}