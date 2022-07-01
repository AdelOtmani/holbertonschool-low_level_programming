#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - Check the code
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int s;
	int n;
	dog_t *dolgie;
	
	dolgie = malloc(sizeof(dog_t));
	s = strlen(name) + 1;
	n = strlen(owner) + 1; 
	dolgie->name = malloc(sizeof(char) * s);

	if (dolgie->name == NULL)
	{
		free(dolgie);
		return (NULL);
	}
	strcpy(dolgie->name, name);
	dolgie->age = age;
	dolgie->owner = malloc(sizeof(char) * o);
	if (dolgie->owner == NULL)
	{
		free(dolgie->name);
		free(dolgie);
		return (NULL);
	}
	strcpy(dolgie->owner, owner);
	return (dolgie);
}
