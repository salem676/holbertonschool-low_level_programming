/*
 * File: 3-strspn.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strspn - length prefix.
 * @s: pointer to dest area.
 * @accept: prefix substring.
 * Description: returns number of bytes in initial segment
 * of s which consists only of bytes from accept.
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
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
		if (!accept[j])
			break;
	}
	return (i);
}
