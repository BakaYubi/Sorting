#include "CSelectionSort.h"

CSelectionSort::CSelectionSort()
{
}


CSelectionSort::~CSelectionSort()
{
}

void CSelectionSort::sorting()
{
	int *data = getData();
	int size = getSize();

	for(int Last = size-1;Last >=1;--Last)
	{
		int Largest = 0;
		for (int Current = 1; Current <= Last; Current++)
		{
			if (data[Current] > data[Largest])
				Largest = Current;
		}
		indexExchange(&data[Last] ,&data[Largest]);
	}
}
