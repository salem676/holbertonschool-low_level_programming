
/*
 * File: 4-print_rev.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints reverse.
 * @str: direction of first position of string.
 * Description: this function prints a string in reverse order, followed
 * by a new line.
 * Return: void.
 */
void print_rev(char *str)
{
	int len;
	char *dum;
	/**
	 * @len: variable that stores lenght of str.
	 * @dum: dummy pointer variable.
	 */
	len = _strlen(str);
	dum = str;
	str = str + len;
	while (str >= dum)
	{
		_putchar(*str);
		str--;
	}
	_putchar('\n');
}
