#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog's description
 * @name: dog's name
 * @age: dog's age
 * @owner:  the owener of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
