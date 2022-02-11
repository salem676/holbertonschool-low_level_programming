#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9.
 *
 * Return: void.
 */
void print_numbers(void)
{
	int i;
	/**
	 * i - counter and number to be printed.
	 *
	 * Description: this part refers to variable description.
	 */
	for (i = 1; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			putchar(i);
			putchar('\n');
		}
	}
}
