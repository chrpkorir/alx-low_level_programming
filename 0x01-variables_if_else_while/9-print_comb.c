#include <stdio.h>

/**
 * main- print all possible combination of single digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}