/*
 * File: 8-print_square.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a diagonal line on the terminal.
 * @size: variable that determines size of square.
 * Description: this functions prints a nxn size square.
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	/**
	 * @i: used as counter.
	 * @j: used as counter.
	 * Description: this part refers to variable description.
	 */
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
