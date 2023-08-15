#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdio.h>
/**
 * init_dog : initialize a variable of type struct dog.
 * @d: structur's name.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = NULL;
		d->age = NULL;
		d->owner = NULL;
	}
}
