/*
 * File: 7-puts_half.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints first, then third, then... of a string.
 * @str: direction of first position of string.
 * Description: prints the first element, then skips one,
 * then prints the third, and so on.
 * Return: void.
 */
void puts_half(char *str)
{
	int n;
	int len;
	/**
	 * @n: represents the half part.
	 * @len: represents length of string.
	 */
	len = _strlen(str);
	if (len % 2 != 0)
	{
		n  = (len - 1) / 2;
		n = len - n;
	}
	else
	{
		n = len / 2;
	}
	str = str + n;
	while (n < len)
	{
		_putchar(*str);
		str++;
		n++;
	}
	_putchar('\n');
}

