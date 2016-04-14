#include <vector>
#include "selection_sort.h"

using std::vector;

void selection_sort(vector<int>& array)
{
	int iMin =  0;
	int temp = 0;
	int i;
	int j;

	for(i = 0; i < array.size() - 1; i++)
	{
		iMin = i;
		for(j = i + 1; j < array.size(); j++)
		{
			if (array[j] < array[iMin])
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			temp = array[i];
			array[i] = array[iMin];
			array[iMin] = temp;
		}
	}
}
