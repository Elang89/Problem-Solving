#include <vector>
#include <iostream>
#include "insertion_sort.h"

using std::vector;

//O(1) space complexity, O(n^2) time complexity
void insertion_sort(vector<int>& array)
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
}
