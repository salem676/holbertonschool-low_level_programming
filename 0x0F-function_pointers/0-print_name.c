/*
 * File: 0-print_name.c
 * Author: salem676.
 * Date: 3/9/2022.
 */
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 * @name: pointer to a name, passed from main file.
 * @f: function pointer.
 * Description: prints name passed from main file.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL)
		(*f)(name);
}
