#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9.
 *
 * Return: void.
 */
void print_numbers(void)
{
	int i;
	for(i=1; i < 10; i++)
	{
		putchar(i);
		putchar('\n');
	}
}
