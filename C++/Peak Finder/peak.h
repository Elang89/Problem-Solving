#ifndef PEAK_H
#define PEAK_H
#include <cstdlib>
#include <iostream>

using namespace std;


// Custom function to generate n sized arrays 
int * array_generator(int n);
int peak_finder(int array[]);
int recursive_peak_finder(int array[], int low, int high);

#endif