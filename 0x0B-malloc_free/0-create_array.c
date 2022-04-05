#include "main.h"
#include <stdlib.h>

/**
 * cretae_array - create array of size (size) and assign char c
 * @size: size of array
 * @c: character to assign
 * 
 * Create an array of size size and assign char 
 * Return: pointer to array else NULL
 */
char *cretae_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
