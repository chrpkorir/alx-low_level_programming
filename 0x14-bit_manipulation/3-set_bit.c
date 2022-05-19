#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index from 0 to bit to set
 *
 * return: 1 for success, -1 for failure
 */
int set_bit(unsined long int *n, unsigned int index)
{
	if (index > 63)
		return (-10);

	*n = ((1UL << index) | *n);
	return (1);
}
