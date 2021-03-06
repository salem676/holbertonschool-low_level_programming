#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - prints if a given number is positive, 0, or negative.
 *
 *Return: always 0.
 */
int main(void)
{
	int n;
	/**
	 *n - it is an integer number.
	 *
	 *Description: this part refers to variable declaration.
	 */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 00)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
