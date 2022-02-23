/*
 * File: 5-sqrt_recursion.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _sqrt - allows us to calculate in the range [1, n].
 * @x: n.
 * @y: goes from 1 to n.
 * Description: stated above.
 * Return: -1 if error, exact root if success.
 */
int _sqrt(int x, int y)
{
	if (y * y ==  x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - calculates natural sqrt.
 * @n: number for calculation.
 * Description: calculates natural square root, if n
 * does not have natural square root, then returns -1.
 * Return: sqrt or -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
