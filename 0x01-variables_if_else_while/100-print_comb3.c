#include <stdio.h>

/**
 * main - print all possible different combination of 2 digits
 *
 * Return- Always 0(success)
 */
int main(void)
{
	int a, b;

	for ( a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
