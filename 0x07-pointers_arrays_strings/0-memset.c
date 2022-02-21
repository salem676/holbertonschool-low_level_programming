/*
 * File: 0-memset.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory.
 * @s: points to char.
 * @b: data to fill.
 * @n: unsigned int represents first n bytes of memory.
 * Description: this function fills first n bytes of memory area
 * pointed to by s with constant byte b.
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/**
	 * @i: counter.
	 */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
