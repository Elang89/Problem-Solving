#include <cstdlib>
#include <iostream>
#include "peak.h"


int * array_generator(int size)
{
	/*array generator that creates an n sized array
	that contains random numbers from 0 - 10000*/
	
	int randomNumber = 0;
	int * array;
	int i = 0;
	array = new int [size]; 
	srand (time(NULL));

	while(i < size)
	{
		randomNumber = rand();
		array[i] = randomNumber;
		i++;
	}
	return array;
}

/*Finds a peak, worst case is O(n)*/

int peak_finder(int array [])
{
	for(size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		if(i == 1 && array[i] >= array[i + 1])
		{
			return array[i];
		}
		else if (i == sizeof(array)/sizeof(array[0]) - 1  && 
			array[i] >= array[i - 1])
		{
			return array[i];
		}
		else if (array[i] >= array[i+1]  && array[i] >= array[i-1]) 
		{
			return array[i];
		}
	}
}

int recursive_peak_finder(vector<int> array, int low, int high)
{
	int middle = (low +  high)/2;

	if (array[middle] >= array[middle + 1]  
		&& array[middle] >= array[middle - 1])
	{
		return array[middle];
	}
	else if (array[middle] < array[middle - 1])
	{
		return recursive_peak_finder(array, low, middle - 1);
	}
	else if (array[middle] < array[middle + 1])
	{
		return recursive_peak_finder(array, middle + 1, high); 
	}	
}

int matrix_peak(vector< vector<int> > m, int low, int high)
{
	int i;
	int j = (low + high)/2;

	/* 1D array brute force peak function, 
	modified to work with column iteration on 
	matrices. Time complexity is O(n)*/
	if(m.size() == 1)
	{
		return recursive_peak_finder(m[0], 0, m[0].size());
	}

	for(i = 0; i < m.size() ; i++)
	{
		if(i > 0 && i < m.size()-1 &&
			m[i][j] >= m[i+1][j] && m[i][j] >= m[i-1][j])
		{
			cout << m[i][j] << endl;
			break;
		}
		else if(i == 0 && m[i][j] >= m[i+1][j])
		{
			cout << m[i][j] << endl;
			break;
		}
		else if(i == m.size() - 1  && m[i][j] >= m[i-1][j])
		{
			cout << m[i][j] << endl;
			break;
		}
		
	}
	/* If peak is found in a middle column, it is returned
	otherwise the function is called on a column which contains
	a number greater than the greatest number in the current column.
	Time complexity is O(log n) */
	if(m[i][j] >= m[i][j+1] && m[i][j] >= m[i][j-1])
	{
		return m[i][j];
	}
	else if(m[i][j] < m[i][j+1])
	{
		return matrix_peak(m, j+1, high);
	}
	else if(m[i][j] < m[i][j-1])
	{
		return matrix_peak(m, low, j-1);
	}
}
