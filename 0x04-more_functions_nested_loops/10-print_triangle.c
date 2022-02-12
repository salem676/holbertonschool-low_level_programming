/*
 * File: 10-print_triangle.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle on the terminal.
 * @size: variable that determines size of triangle.
 * Description: this functions prints a triangle of side n.
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;
	/**
	 * @i: used as counter.
	 * @j: used as counter.
	 * Description: this part refers to variable description.
	 */
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i ; j++)
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
