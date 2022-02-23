/*
 * File: 4-pow_recursion.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculates power.
 * @x: number for calculation.
 * @y: power for calculation.
 * Description: calculates x powered by y, using recursion.
 * Return: power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
