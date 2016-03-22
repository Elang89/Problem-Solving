#ifndef PEAK_H
#define PEAK_H
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;


// Custom function to generate n sized arrays 
int * array_generator(int n);
int peak_finder(int array[]);
int recursive_peak_finder(vector<int>, int low, int high);
int matrix_peak(vector< vector<int> > m, int low, int high);

#endif