#include <cstdlib>
#include <iostream>
#include "peak.h"

using namespace std;

int main(int argc, char * argv[])
{
	int array[3] = {1,3,2};
	int peak = 0;
	int peak_2 = 0;
    	
    peak = peak_finder(array);
    peak_2 = recursive_peak_finder(array, 0, sizeof(array));
  	cout << peak << endl;
  	cout << peak_2 << endl;
	return 0;
}