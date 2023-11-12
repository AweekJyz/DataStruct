#include "sort.h"

void InsertSort(SqList& L)
{
	int i;
	for (i = 2; i <= L.length; ++i)
	{
		if (L.r[i].key < L.r[i - 1].key)					//insert r[i] if it smaller than the one before it
		{
			L.r[0] = L.r[i];								//put r[i] into r[0]
			L.r[i] = L.r[i - 1];							//move r[i-1] back
			int j;
			for (j = i - 2; L.r[0].key < L.r[j].key; --j)	//search where to insert from right to left
				L.r[j + 1] = L.r[j];						//move r[j] back
			//for (j = i - 1; L.r[0].key < L.r[j].key; --j)	//search where to insert from right to left
			//	L.r[j + 1] = L.r[j];						//move r[j] back

			L.r[j + 1] = L.r[0];							//insert r[i] 
		}
	}
}