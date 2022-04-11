#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @name: structure
 * @owner: struct
 * @age: struct
 */
struct dog
{
	char * name;
	char *owner;
	int age;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name  = name;
	dog->owner = owner;
	dog->age = age;
	return dog;
}
