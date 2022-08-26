#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* linear_search - Function
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
