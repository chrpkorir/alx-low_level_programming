#include "stdio.h"

/**
 * main - prints "_putchar" followed b a new line
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		putchar(p[i]);
	}
	putchar('\n');
	return (0);
}
