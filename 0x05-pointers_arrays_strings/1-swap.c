/*
 * File: 1-swap.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * swap_int - interchanges pointed values.
 * @a: first pointer variable.
 * @b: second pointer variable.
 * Description: this functions interchanges values pointed by the
 * pointer variables.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;
	/**
	 * @c: dummy pointer to int variable.
	 */
	c = *a;
	*a = *b;
	*b = c;
}
