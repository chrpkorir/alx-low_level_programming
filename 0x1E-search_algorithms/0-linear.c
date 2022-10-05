#include "search_algos.h"

/**
 * linear_search - Searches a value in an array of 
 *                 integers using Linear search.
 * @array: Pointer to the first element of array to search. 
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located.
 *         otherwise -1 if value not present or array is NULL
 */

int linear_search(int *array, size_t size, int value){
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
