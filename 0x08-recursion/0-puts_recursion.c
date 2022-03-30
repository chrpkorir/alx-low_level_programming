#include <stdio.h>

/**
 * _puts_recursion - prints a string,
 * followed by new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar++;
		_put_recursion(s + 1);
	}
	else
		putchar ('\n');
}
