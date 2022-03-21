#include "main.h"
#include <stdio.h>

/**
 * rev_string - function thst reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char *src = s;
	char *end = src + strlen(src) - 1;

	while (end > src)
	{
	       char t = *end;
       		*end-- = *src;
		*src++ = t;
	}
	_putchar(s);
}	
	
