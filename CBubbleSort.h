#pragma once
#include "CSort.h"
class CBubbleSort:public CSort
{
public:
	CBubbleSort();
	~CBubbleSort();
	CBubbleSort(int Max) :CSort(Max) { }
	void sorting();
};

