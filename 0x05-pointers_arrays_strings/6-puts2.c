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
	int i;
	/**
	 * @i: counter.
	 */
	i = 1;
	while (*str != '\0')
	{
		if ((*str != ' ') && (i == 1))
		{
			_putchar(*str);
		}
		i = i * -1;
		str++;
	}
	_putchar('\n');
}
