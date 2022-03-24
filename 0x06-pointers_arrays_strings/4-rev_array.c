#include "main.h"

/**
 * reverse_array - reverses the content of array
 * @a: input value
 * @n: number elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
