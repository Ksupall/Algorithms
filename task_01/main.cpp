#include <iostream>
#include <vector>

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