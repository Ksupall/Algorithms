#include <iostream>
#include <vector>

// сортировка слиянием
void Merge(std::vector<int> &arr, int first, int middle, int last)
{
	int n1 = middle - first + 1;
	int n2 = last - middle;
	std::vector<int> b(n1 + 1);
	std::vector<int> c(n2 + 1);
	int j = 0;
	for (int i = first; i <= middle; i++)
	{
		b[j] = arr[i];
		j++;
	}
	/*
	for (int i = 0; i < n1 + 1; i++)
		std::cout << b[i] << " ";
	*/
	j = 0;
	for (int i = middle + 1; i <= last; i++)
	{
		c[j] = arr[i];
		j++;
	}
	b[n1 + 1] = 100000000;
	c[n2 + 1] = 100000000;
	int i = 0;
	j = 0;
	
	for (int k = first; k <= last; k++)
	{
		if (b[i] <= c[j] )
			arr[k] = b[i++];
		else
			arr[k] = c[j++];
	}
};

void MergeSort(std::vector<int> &arr, int first, int last)
{
	if (first < last)
	{
		int middle = (first + last) / 2;
		MergeSort(arr, first, middle); //сортировка левой части
		MergeSort(arr, middle + 1, last); //сортировка правой части
		Merge(arr, first, middle, last); //слияние двух частей
	} 
}

int main()
{
	int amount = 5;
	std::vector<int> arr(amount);
	arr = {-1, 5, 7, -50, 6};
	MergeSort(arr, 0, amount);
	
	for (int i = 0; i < amount; ++i)
		std::cout << arr[i] << " ";
	
	return 0;
}