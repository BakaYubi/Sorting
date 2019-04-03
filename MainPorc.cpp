#include"CSort.h"
#include"CSelectionSort.h"

void main()
{
	int data[10] = { 10,5,7,1,9,3,8,6,4,1 };
	CSelectionSort *selectionSort = new CSelectionSort(10);
	CSort *testSort;

	testSort = selectionSort;
	testSort->initData(data);
	testSort->sorting();
	testSort->draw();
}