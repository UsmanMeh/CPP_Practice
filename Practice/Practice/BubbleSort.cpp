#include "BubbleSort.h"

void swap(int* a, int* b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
	//cout <<" " << *a << " Swap " << *b << endl;
}
BubbleSort::BubbleSort()
{
}
BubbleSort::~BubbleSort()
{
}
int BubbleSort::BubbleSortIntArray(int* unsorted , int size)
{
	for (size_t i = 0; i < size-1 ; i++)
	{
		if (unsorted[i + 1] < unsorted[i])
		{
			swap(&unsorted[i + 1], &unsorted[i]);
			for (size_t j = i; j > 0; j--)
			{
				if (unsorted[j] < unsorted[j-1])
				{
					swap(&unsorted[j], &unsorted[j-1]);
				}
			}
		}
	}
	return 0;
}
void BubbleSort::printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
