/*
 * File: 1-string_nconcat.c
 * Author: salem676
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string of chars
 * @s2: string of chars
 * @n: size of s2 to copy
 * Description: this function concatenates two strings with the n first
 * bytes of the second one to the first.
 * Return: pointer to the new allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2 = 0;
	unsigned int i, j;
	char *str_copy;
	char *tmp1 = s1;
	/**
	 * @len1: length of s1, @len2: length of s2.
	 * @i: counter, @j: counter.
	 * @str_copy: copy of string.
	 * @tmp1: temporal pointer variable.
	 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (*s1++)
		i++;
	len1 = i;
	s1 = tmp1;
	len2 = n;
	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);
	j = 0;
	while (j < len1)
	{
		str_copy[j] = s1[j];
		j++;
	}
	while (j < len1 + len2)
	{
		str_copy[j] = s2[j - len1];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}
