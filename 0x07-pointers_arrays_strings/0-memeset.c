#include "main.h"

/**
 * *_memset - Fills the memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: bytesto be filled starting from s to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
