/*
 * File: 1-strncat.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strncat - string concatenate.
 * @dest: destined string.
 * @src: source string.
 * @n: size of string.
 * Description: this functions concatenates src string to dest string.
 * Return: pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;
	/**
	 * @c1: counter for src.
	 * @c2: counter for dest.
	 */
	c1 = 0;
	c2 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	while ((src[c2] != '\0') && (c2 < n))
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}
