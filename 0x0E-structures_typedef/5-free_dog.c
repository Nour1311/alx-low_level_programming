#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees the dogs..
 * @d:the struct.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
