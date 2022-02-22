/*
 * File: 2-strchr.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strchr - pointer to first ocurrence.
 * @s: pointer to dest area.
 * @c: pointer to src area.
 * Description: returns pointer to first ocurrence of
 * character c in string s, or NULL if not found.
 * Return: pointer to first ocurrence.
 */
char *_strchr(char *s, char c)
{
	int i;
	/**
	 * @i: counter for dest.
	 */
	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
