#pragma once
#include <iostream>
using namespace std;
class MergeSort
{
public :
	MergeSort();
	~MergeSort();

	void Sort(int* array, int size);
private:
	void SortArray(int* array, int size);
	void MergeArray(int* arrayA, int sizeA, int* arrayB, int sizeB);
	void swap(int* a, int* b);
	void swapArray(int* a,int sizeA, int* b, int sizeB);
	void printArray(int arr[], int size);
};

