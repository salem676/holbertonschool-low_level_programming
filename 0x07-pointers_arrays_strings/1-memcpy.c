/*
 * File: 1-memcpy.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _memcpy - string concatenate.
 * @dest: pointer to dest area.
 * @src: pointer to src area.
 * @n: number of bytes.
 * Description: this functions copies n bytes from memory
 * src memory area to memory area dest.
 * Return: pointer to char dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/**
	 * @i: counter.
	 */
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
