/*
 * File: 0-put_recursion.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints string.
 * @s: pointer to char.
 * Description: prints a string, followed by a line.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
