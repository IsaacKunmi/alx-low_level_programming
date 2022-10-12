#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - function creates a new dog
 *@name:
 *@age:
 *@owner:
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;

	if (doggy != NULL)
	{
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	}

	return (doggy);
}
