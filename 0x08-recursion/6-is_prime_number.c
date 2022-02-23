/*
 * File: 6-is_prime_number.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * prime - allows us to calculate in the range [1, n].
 * @x: n.
 * @y: goes from 1 to n.
 * Description: stated above.
 * Return: -1 if error, 1 if success.
 */
int prime(int x, int y)
{
	if (y  ==  x)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}
/**
 * is_prime_number - revises primality.
 * @n: number for calculation.
 * Description: calculates natural square root, if n
 * does not have natural square root, then returns -1.
 * Return: 1 or -1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
