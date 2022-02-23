/*
 * File: 101-wildcmp.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * wildcmp - string compare.
 * @s1: string to compare.
 * @s2: string containing wild char.
 * Description: compares and returns 1 if strings identical
 * else returns 0.
 * Return: success 1, -1 fail.
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if ((*s2 == '*') && (*(s2 + 1)) != '\0' && *s1 == '\0')
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
