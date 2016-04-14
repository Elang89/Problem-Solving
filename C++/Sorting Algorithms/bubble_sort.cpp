#include <vector>
#include "bubble_sort.h"

using std::vector;


void bubble_sort(vector<int>& array)
{
	int temp = 0;
	int i = 0;
	int j = 0;

	for(i = 0; i < array.size(); i++)
	{
		for(j = 0; j < i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}
