/*
 * File: 1-strdup.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to new memory with cpy string.
 * @str: size of array.
 * Description: returns pointer to new memory containing copy of
 * string as a parameter.
 * Return: pointer to str and NULL if str = NULL or scarce memory.
 */
char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = tmp;

	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		copy[j] = str[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
