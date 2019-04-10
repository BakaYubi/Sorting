#include"CSort.h"
#include"CSelectionSort.h"
#include"CBubbleSort.h"
#include"CInsertionSort.h"
#include"CMergeSort.h"

#define MAX 10

void main()
{
	int data[MAX] = { 10,5,7,1,9,3,8,6,4,1 };
	CSelectionSort *selectionSort = new CSelectionSort(MAX);
	CSort *testSort;

	testSort = selectionSort;
	testSort->initData(data);
	testSort->sorting();
	testSort->draw();

	CBubbleSort *bubbleSort = new CBubbleSort(MAX);
	testSort = bubbleSort;
	testSort->initData(data);
	testSort->sorting();
	testSort->draw();

	CInsertionSort *insertionSort = new CInsertionSort(MAX);
	testSort = insertionSort;
	testSort->initData(data);
	testSort->sorting();
	testSort->draw();

	CMergeSort *mergeSort = new CMergeSort(MAX);
	testSort = mergeSort;
	testSort->initData(data);
	testSort->sorting();
	testSort->draw();
}