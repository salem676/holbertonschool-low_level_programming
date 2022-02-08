#include <stdio.h>
/**
 *main - prints first 50 Fibonacci numbers.
 *
 *Return : void.
 */
int main(void)
{
	unsigned long count, i, j, k;
	/**
	 *count - used as counter.
	 *i,j,k - variables used to calculate numbers.
	 *Description: this refers to variable dclaration.
	 */
	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
