/*
 * File: 5-rev_string.c
 * Author: salem676
 */
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * rev_string - reverse string.
 * @s: direction of first position of string.
 * Description: this function reverses a string.
 * Return: void.
 */
void rev_string(char *s)
{
	int len;
	int i;
	char *last;
	char dum;
	/**
	 * @len: variable that stores lenght of str.
	 * @i: used as counter.
	 * @last: pointer to last letter.
	 * @dum: dummy variable.
	 */
	len = 0;
	while (s[len] != '\0')
		len++;
	i = 0;
	last = s + len - 1;
	while (i < len / 2)
	{
		dum = *s;
		*s = *last;
		*last = dum;
		s++;
		last--;
		i++;
	}
	s = s - 3;
}
