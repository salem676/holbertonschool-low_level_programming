#include <stdio.h>
/**
 * print_triangle - this functions prints a triangle followed
 * by a line.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i;
	if (size > 0)
	{
		for (i = 0 ;i < size ; i++ )
		{
			putchar('#');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
