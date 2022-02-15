/*
 * File: 6-puts2.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints first, then third, then... of a string.
 * @str: direction of first position of string.
 * Description: prints the first element, then skips one,
 * then prints the third, and so on.
 * Return: void.
 */
void puts2(char *str)
{
	int len;
	/**
	 * @len: represents string length.
	 */
	len = _strlen(str);
	while (*str != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		len++;
	}
	_putchar('\n');
}

