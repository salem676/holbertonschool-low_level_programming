/*
 * File: 1-print_rev_recursion.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints reverse.
 * @s: pointer to char.
 * Description: prints a string in reverse.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
