/*
 * File: 8-print_array.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n integers.
 * @a: direction of first position of array.
 * @n: n elements.
 * Description: prints n elements of an array of integers.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;
	/**
	 * @i: counter.
	 */
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}

