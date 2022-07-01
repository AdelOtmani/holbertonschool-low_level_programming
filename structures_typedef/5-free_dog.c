#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Check the code
 * @d: is a struct
 * Return: nothing because void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
