#include "main.h"

/**
 * puts2 - prints every other character of string,
 * starting with the first character,
 * followed by a new line
 * @str: string
 */
void put2(char *str)
{
	int longi = 0;
	int c = 0;
	int o;

	while (*str != '\0')
	{
		str++;
		longi++;
	}
	c = longi - 1;
	for (o = 0; 0 <= c; o++)
	{
		if (o % 2 == 0)
		{ 
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
