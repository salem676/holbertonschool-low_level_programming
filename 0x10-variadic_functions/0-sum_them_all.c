/*
 * Filename: 0-sum_them_all.c
 * Author: salem676
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of variadic variable.
 * @n: const.
 * Description: this function returns sum of al parameters.
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	double sum = 0;
	/**
	 * @i: counter.
	 * @list: variadic list.
	 * @sum: variable to sum.
	 */
	if (n == 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
