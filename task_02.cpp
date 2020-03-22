#include <iostream>
#include <vector>

void Merge(std::vector<int> A, int first, int last)
{
	int middle, start, final, j;
	std::vector<int> mas(100);
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	//возвращение результата в список
	for (j = first; j <= last; j++) A[j] = mas[j];
};

void MergeSort(std::vector<int> A, int first, int last)
{
	if (first < last)
	{
		MergeSort(A, first, (first + last) / 2); //сортировка левой части
		MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
		Merge(A, first, last); //слияние двух частей
	} 
}

int main()
{
	int amount = 0;
	std::cout << "Enter amount of elements: ";
	std::cin >> amount;
	std::vector<int> arr(amount);
	for (int i = 0; i < amount; ++i)
		std::cin >> arr[i];
	MergeSort(arr, 1, amount);
	std::cout << std::endl;
	for (int i = 0; i < amount; ++i)
		std::cout << arr[i] << " ";
	return 0;
}