/*
 * File: 101-print_number.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_number - prints integer.
 * @n: integer to be printed.
 * Description: custom function that prints and integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int num;
	/**
	 * @num: represents an unsigned integer.
	 */
	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
