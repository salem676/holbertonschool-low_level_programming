/*
 * File: 100-get_endianness.c
 * Author: salem676
 */
#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - write a function that checks the endianness.
 * Description: as above.
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;
	/*
	 * @x: unsgned int in 1.
	 * @c: ptr to char, casted from int.
	 */
	return ((int)*c);
}
