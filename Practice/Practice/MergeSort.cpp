#include "MergeSort.h"

MergeSort::MergeSort()
{
}

MergeSort::~MergeSort()
{
}
void MergeSort::swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
void MergeSort::swapArray(int* a, int sizeA, int* b, int sizeB)
{
	int* c;
	c = new int[sizeA];
	size_t i = 0;
	//copy a to c temp array
	for (; i < sizeA; i++)
	{
		c[i] = a[i];
	}
	//copy b to a 
	for (i = 0; i < sizeA; i++)
	{
		a[i] = b[i];
	}
	//copy back c to b for swap
	for (i = 0; i < sizeA; i++)
	{
		b[i] = c[i];
	}

}
void MergeSort::Sort(int* array, int size)
{
	int mid = size / 2;
	//cout << endl << "Size = " << size << " Mid = " << mid << " size - mid = " << size - mid;
	SortArray(array, size);
}

void MergeSort::SortArray(int* array, int size)
{
	if (size > 1)
	{
		int mid = (size+1) / 2;
		//cout << endl << "size = " << size << " | mid = " << mid << " | Left = 0 - " << mid << " | Right = " << mid << " - " << (size - mid);
		SortArray(array, mid);
		SortArray(&array[mid], size - mid);
		MergeArray(array, mid, &array[mid], size - mid);
	}
}

void MergeSort::MergeArray(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
		//swapArray(arrayA, sizeA, arrayB, sizeB);
	int* copyA;
	int* copyB;
	copyA = new int[sizeA];
	copyB = new int[sizeB];
	size_t i = 0;
	for (; i < sizeA; i++)
	{
		copyA[i] = arrayA[i];
	}
	for (i = 0; i < sizeB; i++)
	{
		copyB[i] = arrayB[i];
	}
	int indexA = 0;
	int indexB = 0;
	int indexArray = 0;

	while (indexA < sizeA && indexB < sizeB)
	{
		if (copyA[indexA] < copyB[indexB])
		{
			arrayA[indexArray] = copyA[indexA];
			indexA++;
		}
		else
		{
			arrayA[indexArray] = copyB[indexB];
			indexB++;
		}
		indexArray++;
	}
	while (indexA < sizeA) 
	{
		arrayA[indexArray] = copyA[indexA];
		indexA++;
		indexArray++;
	}
	while (indexB < sizeB)
	{
		arrayA[indexArray] = copyB[indexB];
		indexB++;
		indexArray++;
	}

}
void MergeSort::printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

