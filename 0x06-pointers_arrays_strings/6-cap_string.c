/*
 * File: 6-cap_string.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes..
 * @s: direction of first element of string.
 * Description: this function capitalizes the first word encountered
 * after the given special signs.
 * Return: pointer to string.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	/**
	 * @i: counter.
	 * @j: turned on/off.
	 */
	j = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ') || (s[i] == 9) || (s[i] == ',') || (s[i] == ';')
		|| (s[i] == '.') || (s[i] == '!') || (s[i] == '?') || (s[i] == '"')
		|| (s[i] == '(') || (s[i] == ')') || (s[i] == '{')
		|| (s[i] == '}') || (s[i] == 10))
		{
			j = 1;
		}
		else
		{
			if ((s[i] > 96) && (s[i] < 123) && (j == 1))
			{
				s[i] = s[i] - 32;
				j = 0;
			}
			else
			{
				j = 0;
			}
		}
		i++;
	}
	return (s);
}
