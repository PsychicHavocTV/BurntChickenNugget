

#include <iostream>


void SortArray(int* arr, int count);
bool IsArraySorted(const int* arr, int count);

int main(int argc, char** argv)
{
	const int NUM_ITEMS = 8;
	int numbers[NUM_ITEMS] = { 13, 1, 7, 5, 11, 9, 15, 3 };

	SortArray(numbers, NUM_ITEMS);

	// Test: all values should be sorted in ascending order
	if (IsArraySorted(numbers, NUM_ITEMS)) std::cout << "Pass: the array is sorted" << std::endl;
	else std::cout << "Fail: the array is not sorted" << std::endl;

	system("pause");
	return 0;
}

bool IsArraySorted(const int* arr, int count)
{	
	for (int i = 0; i < count - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SortArray(int* arr, int count)
{
	// TODO: 
	// modify the values in the array so that when this method returns
	// all values are sorted in ascending order

	bool sorted = false;
	while (!sorted)
	{
		for (int i = 1; i < count; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				Swap(arr[i - 1], arr[i]);
				if (IsArraySorted(arr, count))
				{
					sorted = true;
					return;
				}
			}
		}
	}
}
