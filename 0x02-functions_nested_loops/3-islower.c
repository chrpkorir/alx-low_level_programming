#include "main.h"

/**
 * _islower- checks for lowercase character.
 * @c- The character to print
 *
 * Returns 1 if c is lower case
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
		return (0);
}
