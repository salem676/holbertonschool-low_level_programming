#include "main.h"
/**
 *times_table - generates a table of 9s.
 *
 *Return: void.
 */
void times_table(void)
{
	int n;
	int m;
	/**
	 *n,m are counters, used also for de calculation.
	 *
	 *Description: this part refers to variables used.
	 */
	for (n = 0; m <= 9; m++)
	{
		for (m = 0; m<= 9; m++)
		{
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
				if(m * n <= 9)
					_putchar(' ');
			}
			if (m * n > 9)
				_putchar (m * n / 10 + '0');
			_putchar (m * n % 10 + '0')
		}
		_putchar('\n');
	}
}
