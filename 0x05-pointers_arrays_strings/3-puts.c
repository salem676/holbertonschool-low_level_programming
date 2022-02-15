/*
 * File: 3-puts.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _puts - determines if integer given is digit.
 * @str: direction of first position of string.
 * Description: this function prints a string, followed by a line, to stdout.
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
