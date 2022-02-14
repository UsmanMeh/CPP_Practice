#pragma once
#include <iostream>
using namespace std;

class BubbleSort
{
public:
	BubbleSort();
	~BubbleSort();
	int BubbleSortIntArray(int* unsorted , int size);
private:
	void printArray(int arr[], int size);
};

