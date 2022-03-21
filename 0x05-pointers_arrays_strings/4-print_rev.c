#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by new line
 * @s: string to print
 */
void print_rev(char *s)
{
	char *src = s + strlen(s);

	while (src > s)
	{
		_putchar(*--src);
	}
	_putchar('\n');
}
