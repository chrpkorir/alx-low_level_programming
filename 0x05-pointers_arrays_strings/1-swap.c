#include "main.h"

/**
 * swap_int - a function that swaps values of two ints
 * @a: integer to swap
 * @b: integer yo swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
