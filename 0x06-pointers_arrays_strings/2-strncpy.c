/*
 * File: 2-strncpy.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies string.
 * @dest: direction of first position of destiny buffer.
 * @src: direction of first position of initial buffer.
 * @n: represents number of bytes to print.
 * Description: copies src string to dest string, including.
 * termination null byte (\0).
 * Return: pointer to char dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	/**
	 * @i: counter 1.
	 * @j: counter 2.
	 */
	i = 0;
	j = 0;
	while (n > j)
	{
		if (src[j] == '\0')
		{
			while (j < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] == src[j];
			j++;
			i++;
		}
	}
	return (dest);
}

