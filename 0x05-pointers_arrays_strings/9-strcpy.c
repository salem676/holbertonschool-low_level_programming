/*
 * File: 9-strcpy.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string.
 * @dest: direction of first position of destiny buffer.
 * @src: direction of first position of initial buffer.
 * Description: copies src string to dest string, including
 * termination null byte (\0).
 * Return: pointer to char dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	/**
	 * @i: contador
	 */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

