#include <stdio.h>
/**
 * fizz_buzz - prints numbers from 1 to 100 and for 
 * multiples of 3 prints Fizz, for multiples of 5
 * prints Buzz and for multiples of both prints FizzBuzz.
 *
 * Return: void.
 */
void fizz_buzz (void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) && (i % 5))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf(i);
		}
	}
}
