// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BubbleSort.h"
#include "MergeSort.h"
#include "HeapSort.h"

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
    BubbleSort bSort;
    MergeSort mSort;
    HeapSort hSort;

    //Bubble Sort
    cout << endl;
    cout << "Bubble Sort" << endl;
    int unsortedArray []= { 4,3,2,1,55,77,0,12,80,7 };
    int arraySize = 10;
    printArray(unsortedArray, arraySize);
    cout << endl;
    bSort.BubbleSortIntArray(unsortedArray , arraySize);
    cout << endl;
    printArray(unsortedArray, arraySize);

    //Merge Sort
    cout << endl;
    cout <<"Merge Sort" << endl;
    int unsortedArray2 [] = { 4,3,2,1,55,77,0,12,80,7 };

    printArray(unsortedArray2, arraySize);
    cout << endl;
    mSort.Sort(unsortedArray2, arraySize);
    cout << endl;
    printArray(unsortedArray2, arraySize);

    //Heap Sort
    cout << endl;
    cout << "Heap Sort" << endl;
    int unsortedArray3[] = { 4,3,2,1,55,77,0,12,80,7 };

    printArray(unsortedArray3, arraySize);
    cout << endl;
    hSort.Sort(unsortedArray3, arraySize);
    cout << endl;
    printArray(unsortedArray3, arraySize);

}
