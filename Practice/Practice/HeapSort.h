#pragma once
#include <iostream>
using namespace std;

class HeapSort
{
private:
	void heapify(int arr[], int n, int i);
public:
	void Sort(int arr[], int n);
	void printArray(int arr[], int n);
};

