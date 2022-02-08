#include "main.h"
/**
 *print_last_digit - generates last digit of number n.
 *@n: note that integer limits are 2147483647, -2147483648
 *Return: last digit.
 */
int print_last_digit(int n)
{
	if (n < 0 || n > 9)
		n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
