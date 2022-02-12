#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9.
 * Description: this algorithm prints numbers from 0 to 9.
 * Return: void.
 */
void print_numbers(void)
{
	int i;
	/**
	 * @i: counter and number to print.
	 */
	for (i = 0; i < 10; i++)
	{
		putchar(i+48);
	}
	putchar('\n');
}
