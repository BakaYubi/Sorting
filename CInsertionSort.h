#pragma once
#include"CSort.h"
class CInsertionSort:public CSort
{
public:
	CInsertionSort();
	~CInsertionSort();
	CInsertionSort(int Max) :CSort(Max) { }
	void sorting();
};

