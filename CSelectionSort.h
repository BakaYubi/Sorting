#pragma once
#include "CSort.h"
class CSelectionSort : public CSort
{
public:
	CSelectionSort();
	~CSelectionSort();
	CSelectionSort(int Max):CSort(Max){ }
	void sorting();
};

