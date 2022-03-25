/*
 * File: 4-clear_bit.c
 * Author: salem676
 */
#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * clear_bit - Function that clear the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number input.
 * Description: as stated above.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;
	/*
	 * @add: dummy int variable for calculation.
	 */
	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
