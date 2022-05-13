/*
 * File: 100-get_endianness.c
 * Author: salem676
 */
#include "holberton.h"
/**
 * get_endianness - return the endianness of the machine.
 * Description: as above.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	int n = 1;
	/*
	 * @n: integer in 1.
	 */
	return (*((char *) &n) + '0');
}
