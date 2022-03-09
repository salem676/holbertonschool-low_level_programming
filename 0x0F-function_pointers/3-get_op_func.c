/*
 * File: 3-get_op_func.c
 * Author: salem676
 */
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function pointer to the correct function to perform the
 * operation asked by the user.
 * @s: operator passed as argument to the program.
 * Description: as above.
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	/**
	 * @op_t: struct that defines operations.
	 * @i: counter.
	 */
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (*(ops[i]).f);
		i++;
	}
	return (NULL);
}
