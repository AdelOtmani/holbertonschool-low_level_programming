#include "search_algos.h"
/**
* binary_search - Function
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recu(array, 0, size, value));
}

/**
* binary_search_recu - Function
* @array: array to search
* @b: begin of the array
* @e: end of the array
* @value: value to search for
* Return: the first index where value is located
*/
int binary_search_recu(int *array, size_t b, size_t e, int value)
{
	unsigned long int  m, i;
	char *d;

	d = " ";
	m = (b + (e - 1)) / 2;
	if (b >= e)
	{
		return (-1);
	}
	printf("Searching in array:");
	for (i = b; i < e; i++)
	{
		printf("%s%d", d, array[i]);
		d = ", ";
	}
	printf("\n");
	if (array[m] == value)
	{
		return (m);
	}
	if (array[m] < value)
	{
		return (binary_search_recu(array, m + 1, e, value));
	}
	return (binary_search_recu(array, b, m, value));

}
