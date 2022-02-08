#include <stdio.h>
/**
 *main - sum even fibonacci numbers under 4 million.
 *Return: void.
 */
int main(void)
{
	unsigned long count, i, j, k, sum;
	/**
	 *count - is a counter.
	 *i,j,k - is used to calculate.
	 *
	 */
	i = sum = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
