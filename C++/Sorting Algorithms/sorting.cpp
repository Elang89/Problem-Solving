#include <vector>
#include <iostream>
#include <climits>
#include "sorting.h"

using std::vector;
using std::cout;
using std::endl;

//O(1) space complexity, O(n^2) time complexity
vector<int> insertion_sort(vector<int> array)
{
	int key = 0;
	int i = 0;

	//initial loop, has O(n) time complexity
	for(int j = 1; j < array.size(); j++)
	{
		key = array[j];
		i = j - 1;
		// second loop, has O(n)
		while(i >= 0 && array[i] > key)
		{
			array[i+1] = array[i];
			i -= 1;
		}
		array[i+1] = key;
	}
	return array;
}

vector<int> bubble_sort(vector<int> array)
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
	return array;
}


vector<int> selection_sort(vector<int> array)
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
	return array;
}

vector<int> merge(vector<int> array, int low, int mid, int high)
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
		right[j] = array[mid + j];
	}
	left.push_back(INT_MAX);
	right.push_back(INT_MAX);
	i = 0;
	j = 0;

	for(int k = 0; k < array.size(); k++)
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
	return array;
}

vector<int> merge_sort(vector<int> array, int low, int high)
{
	int mid = 0;
	if(low < high)
	{
		mid = (low + high)/2;
		merge_sort(array, low, mid);
		merge_sort(array, mid+1, high);
		return merge(array, low, mid, high);
	}
	else
	{
		return array;
	}
}
