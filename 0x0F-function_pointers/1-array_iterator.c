#include "function_pointers.h"
#include <stdio.h>
#include< stdlib.h>

/**
 * array_iteration - executes a function given as parameter
 * @size: size of an array
 * @action: a pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t b;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (b = 0; b < size; b++)
		acton(array[b]);
}
