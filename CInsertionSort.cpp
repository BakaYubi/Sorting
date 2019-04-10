#include "CInsertionSort.h"



CInsertionSort::CInsertionSort()
{
}


CInsertionSort::~CInsertionSort()
{
}

void CInsertionSort::sorting()
{
	int *data = getData();
	int size = getSize();
	for(int Pick = 1;Pick<size;++Pick)
	{
		int Current = Pick;
		int t = data[Pick];
		for (; (Current > 0) && (data[Current - 1] > t); --Current)
			data[Current] = data[Current - 1];
		data[Current] = t;
	}
}
