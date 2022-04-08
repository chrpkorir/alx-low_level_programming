#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb:element to be allocated memory for
 * @size: number of bytes to be allocated
 * @Description: allocate memory for an array of nmemb 
 * elements of size bytes each
 * Return: NULL if nmemb or size = 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = calloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = o; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
