/*
 * File: 1-print_binary.c
 * Author: salem676
 */
#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * print_binary - Function that prints the binary representation of a number
 * @n: number to convert to binary.
 * Description: as above.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
