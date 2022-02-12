#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9.
 * Description: this function prints numbers from 0 to 9.
 * Also prints space where needed (instructions).
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;
	/**
	 * @i: counter and number to be printed.
	 *
	 * Description: this part refers to variable description.
	 */
	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
