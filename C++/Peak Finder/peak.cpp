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
	for(size_t i = 0; i < sizeof(array); i++)
	{
		if(i == 1 && array[i] >= array[i + 1])
		{
			return array[i];
		}
		else if (i == sizeof(array) - 1  && 
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

int recursive_peak_finder(int array[], int low, int high)
{
	int middle = sizeof(low +  high)/2;

	if (array[middle] >= array[middle + 1]  
		&& array[middle] >= array[middle - 1])
	{
		return array[middle];
	}
	else if (array[middle] >= array[middle - 1])
	{
		return(array, low, middle + 1);
	}
	else if (array[middle] >= array[middle + 1])
	{
		return (array, middle - 1, high); 
	}	

}