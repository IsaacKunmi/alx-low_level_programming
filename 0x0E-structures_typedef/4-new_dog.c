#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - function creates a new dog
 *@name: char string name
 *@age:int age
 *@owner: char string owner
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;
	int a, b, c;
	char *d, *e;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;

	for (b = 0; owner[b] != '\0'; b++)
		;

	d = malloc(sizeof(char) * a + 1);
		if (d == NULL)
		{
		free(doggy);
		return (NULL);
		}

	e = malloc(sizeof(char) * b + 1);
		if (e == NULL)
		{
			free(d);
			free(doggy);
			return (NULL);
		}

		for (c = 0; c <= a; c++)
			d[c] = name[c];

		for (c = 0; c <= b; c++)
			e[c] = owner[c];

	doggy->name = d;
	doggy->age = age;
	doggy->owner = e;


	return (doggy);
}
