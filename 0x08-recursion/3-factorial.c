/*
 * File: 3-factorial.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * factorial - calculates.
 * @n: number for calculation.
 * Description: calculates n's factorial.
 * Return: factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
