#include <iostream>
#include <vector>
#include "merge_sort.h"

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	vector<int> array{10,2,4,5};
	int low = 0;
	int high = array.size()-1;
	merge_sort(array,low,high);

	for(int i = 0; i < array.size(); i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}
