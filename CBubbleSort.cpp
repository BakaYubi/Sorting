#include "CBubbleSort.h"



CBubbleSort::CBubbleSort()
{
}


CBubbleSort::~CBubbleSort()
{
}

void CBubbleSort::sorting()
{
	int *data = getData();
	int size = getSize();

	bool Sorted = false;
	for (int Pass = 1; (Pass < size) && (!Sorted); ++Pass) {
		Sorted = true;
		for (int Current = 0; Current < size - Pass; ++Current) {
			if (data[Current] > data[Current + 1]) {
				indexExchange(&data[Current], &data[Current + 1]);
				Sorted = false;
			}
		}
	}
}

