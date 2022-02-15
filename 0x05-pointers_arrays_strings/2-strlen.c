/*
 * File: 2-strlen.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strlen - give lenght of string.
 * @s: direction of first element of string
 * Description: this functions returns the lenght of a given string.
 * Return: string lenght.
 */
int _strlen(char *s)
{
	int count;
	/**
	 * @count: counts.
	 */
	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
