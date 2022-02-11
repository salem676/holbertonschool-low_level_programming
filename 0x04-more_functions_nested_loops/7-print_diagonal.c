#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line on the terminal. 
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	/**
	 * i - used as counter.
	 *
	 * Description: this part refers to variable description.
	 */
	i=1;
	if (n>0)
	{
		while (i <= n)
		{
			putchar('\');
			i++;
		}
		putchar('\n')
	}
	else
	{
		putchar('\n');
	}
}
