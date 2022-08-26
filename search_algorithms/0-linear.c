#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* linear_search - Function 
* @array: array to search
* @size: size of the array
* @value: value to search for
* Retrun: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}