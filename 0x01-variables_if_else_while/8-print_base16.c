#include <stdio.h>

/**
 *main - prints numbers in base 16.
 *
 *Return: 0.
 */
int main(void)
{
	int number;
	/**
	 *number - this variable is associated with integer numerical values.
	 *
	 *Description: this part refers to the variable declaration.
	 */
	number = '0';
	while (number >= '0' && number <= '9')
		putchar(number++);
	number = 'a';
	while (number >= 'a' && number <= 'f')
		putchar(number++);
	putchar('\n');
	return (0);
}
