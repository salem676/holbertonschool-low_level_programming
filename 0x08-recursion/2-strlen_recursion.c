/*
 * File: 2-strlen_recursion.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns length.
 * @s: pointer to char.
 * Description: prints a string in reverse.
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
