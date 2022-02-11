#include <stdio.h>
/**
 * more_numbers - prints ten times from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	/**
	 * i - acts as counter and the number to print.
	 *
	 * Description: this parts describes variables and refers to declaration.
	 */
	j = 1;
	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
		{
	    		putchar(i);
		}
		j++;
	}
}
