/*
 * File: 7-print_diagonal.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal.
 * @n: variable passed to function, represnts number of diagonals.
 * Description: prints a diagonal line on terminal.
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	/**
	 * i - used as counter
	 * Description: this part refers to variable description.
	 */
	i = 1;
	if (n > 0)
	{
		
		while (i <= n)
		{
			_putchar(' ');
			i++;
		}
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
