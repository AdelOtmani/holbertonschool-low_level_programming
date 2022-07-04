#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Check the code
 * @array: int arg pointer
 * @size: arg
 * @action: arg void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
