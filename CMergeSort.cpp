#include "CMergeSort.h"



CMergeSort::CMergeSort()
{
}


CMergeSort::~CMergeSort()
{
}

void CMergeSort::sorting()
{
	int *data = getData();
	int size = getSize();

	MergeSort(data, 0, size-1);
}

void CMergeSort::MergeSort(int S[], int First, int Last)
{
	if (First < Last) {
		int Middle = (First + Last) / 2;
		MergeSort(S, First, Middle);
		MergeSort(S, Middle + 1, Last);
		Merge(S, First, Middle, Last);
	}
}

void CMergeSort::Merge(int S[], int F, int M, int L)
{
	int size = getSize();
	int *Sorted = new int[size];
	int First1 = F; int Last1 = M;
	int First2 = M + 1; int Last2 = L;
	int Index = First1;

	while(First1 <= Last1 && First2 <= Last2)
	{
		if (S[First1] < S[First2])
			Sorted[Index++] = S[First1++];
		else
			Sorted[Index++] = S[First2++];
	}
	for (; First1 <= Last1; ++First1, ++Index)
		Sorted[Index] = S[First1];
	for (; First2 <= Last2; ++First2, ++Index)
		Sorted[Index] = S[First2];

	for (Index = F; Index <= L; ++Index)
		S[Index] = Sorted[Index];
}
