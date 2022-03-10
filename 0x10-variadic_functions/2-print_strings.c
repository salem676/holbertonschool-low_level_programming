/*
 * File: 2-print_strings.c
 * Author: salem676
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings.
 * @separator: char separator.
 * @n: unsigned int.
 * Description: prints strings and new line at end.
 * Return:void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;
	/**
	 * @list: variadic list.
	 * @i: counter.
	 * @str: string dummy.
	 */
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
