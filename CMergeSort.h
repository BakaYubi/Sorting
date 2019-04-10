#pragma once
#include"CSort.h"
class CMergeSort:public CSort
{
public:
	CMergeSort();
	~CMergeSort();
	CMergeSort(int Max) :CSort(Max) { }
	void sorting();
	void MergeSort(int S[], int First, int Last);
	void Merge(int S[], int F, int M, int L);
};

