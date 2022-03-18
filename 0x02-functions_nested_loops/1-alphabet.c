#include "main.h"

/**
 * print_alphabet- Prints alphabet, in lower case, followed by new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
