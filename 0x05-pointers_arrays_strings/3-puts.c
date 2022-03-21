#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by new line, to stdout
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
