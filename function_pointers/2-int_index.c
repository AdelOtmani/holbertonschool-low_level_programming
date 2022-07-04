#include <stddef.h>
#include "function_pointers.h"
/**
 * int_array - Check the code
 * @array: int arg pointer
 * @size: arg
 * @cmp: arg void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return;
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	return (-1);
}
