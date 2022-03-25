/*
 * File: 3-set_bit.c
 * Author: salem676
 */
#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: number.
 * Description: as stated above.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;
	/*
	 * @add: int to be added.
	 */
	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
