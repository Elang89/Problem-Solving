#include <cstdlib>
#include <iostream>
#include <vector>
#include "peak.h"

using namespace std;

int main(int argc, char * argv[])
{
	/*vector<int> array {1,20,40,50,61,80,2};
	int peak = 0;
	int peak_2 = 0;
    	
    peak = peak_finder(array);
    peak_2 = recursive_peak_finder(array, 0, array.size());
  	cout << peak << endl;
  	cout << peak_2 << endl;*/

  	vector < vector<int> > m { vector<int>{10,1,12,85}};
  	int peak = matrix_peak(m, 0, m[0].size());
  	cout << peak << endl;
	return 0;
}