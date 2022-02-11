#include <stdio.h>
/**
 * print_line - prints a line comprised of n _ figures.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;
	i=1;
	if (n > 0)
	{
		while (i < n)
		{
			putchar('_');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
