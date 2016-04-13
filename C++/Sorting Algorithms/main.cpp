#include <iostream>
#include <vector>
#include "sorting.h"

using std::vector;
using std::cout;
using std::endl;

int main(int argc, char * argv[])
{
	vector<int> array{10,2,4,5,11,8,3};
	array = merge_sort(array,0,array.size());

	for(int i = 0; i < array.size(); i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}
