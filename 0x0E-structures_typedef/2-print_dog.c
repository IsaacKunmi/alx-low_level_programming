#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - prints a stuct dog
 *@d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

	printf("Name: ");
	d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);

	printf("Age: ");
	d->age == 0 ? printf("(nil)\n") : printf("%f\n", d->age);

	printf("Owner: ");
	d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
