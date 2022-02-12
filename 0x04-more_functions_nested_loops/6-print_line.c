/*
 * File - 6-print_line.c
 * Author - salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line comprised of n _ figures.
 * @n: integer given that indicates the times to be printed.
 * Description: this functions prints figure _ n times, given.
 * Return: void.
 */
void print_line(int n)
{
	int i;
	/**
	 * @i: acts as counter.
	 */
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
