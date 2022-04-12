#include <stdlib.h>
#include <stdio.h>
#inlude "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog 
 * @name: initialize name
 * @owner: initialize owner
 * @age: initialize age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name  = name;
	d->owner = owner;
	d->age = age;
}
