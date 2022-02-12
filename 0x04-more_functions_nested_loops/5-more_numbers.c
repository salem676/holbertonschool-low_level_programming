#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints ten times from 0 to 14.
 * Description: prints numbers from 0 to 14 ten times.
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	/**
	 * @i: acts as counter and the number to print.
	 * @j: j acts as counter needed to repeat printing.
	 * Description: this parts describes variables and refers to declaration.
	 */
	j = 1;
	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		j++;
		_putchar('\n');
	}
}
