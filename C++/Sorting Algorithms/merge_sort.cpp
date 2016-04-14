#include <vector>
#include <climits>
#include "merge_sort.h"

using std::vector;


void merge(vector<int>& array, int low, int mid, int high)
{
	int i;
	int j;
	int a1_size = mid - low + 1;
	int a2_size = high - mid;
	vector<int> left(a1_size);
	vector<int> right(a2_size);

	for(i = 0; i < a1_size; i++)
	{
		left[i] = array[low + i];
	}

	for(j = 0; j < a2_size; j++)
	{
		right[j] = array[mid + j + 1];
	}

	left.push_back(INT_MAX);
	right.push_back(INT_MAX);
	i = 0;
	j = 0;

	for(int k = low; k <= high; k++)
	{
		if(left[i] <= right[j])
		{
			array[k] = left[i];
			i++;
		}
		else
		{
			array[k] = right[j];
			j++;
		}
	}
	left.clear();
	right.clear();
}

void merge_sort(vector<int>& array, int low, int high)
{
	int mid = 0;
	if(low < high)
	{
		mid = (low + high)/2;
		merge_sort(array, low, mid);
		merge_sort(array, mid+1, high);
	 	merge(array, low, mid, high);
	}
}
