#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: empty
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
