/*
 * File: 4-strpbrk.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - locates bytes of accept.
 * @s: pointer to string.
 * @accept: string of ocurrence to look for.
 * Description: returns pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if byte not found.
 * Return: pointer to byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	/**
	 * @i: first counter.
	 * @j: second counter.
	 */
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
