#include "holberton.h"
/**
 *_abs - calculates absolute value of number given.
 *@n: input value.
 *Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
