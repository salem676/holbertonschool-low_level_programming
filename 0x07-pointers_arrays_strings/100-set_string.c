/*
 * File: 100-set_string.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * set_string - sets a pointer to a char.
 * @s: pointer to a pointer to char argument.
 * @to: pointer to char argument.
 * Description: sets the value of a pointer to a char.
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
