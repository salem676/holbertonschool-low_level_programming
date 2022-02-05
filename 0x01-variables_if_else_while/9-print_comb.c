#include <stdio.h>

/**
 *main - prints numbers, space, ",".
 *
 *Return 0.
 */
int main(void)
{
	int number;

	number = '0';
	while(number >= '0' && number <= '9')
	{
	putchar(number);
		if(number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	number++;
	}
	putchar('\n');
	return (0);
}
