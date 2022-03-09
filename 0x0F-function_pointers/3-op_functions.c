/*
 * File: 3-op_functions.c
 * Author: salem676
 */
#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition.
 * @a: parameter passed from main.
 * @b: parameter passed from main.
 * Description: operates add.
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction.
 * @a: parameter passed from main.
 * @b: parameter passed from main.
 * Description: operates substraction.
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication.
 * @a: parameter passed from main.
 * @b: parameter passed from main.
 * Description: operates product.
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division.
 * @a: parameter passed from main.
 * @b: parameter passed from main.
 * Description: operates division.
 * Return: result.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n"), exit(100);
}
/**
 * op_mod - modulus.
 * @a: parameter passed from main.
 * @b: parameter passed from main.
 * Description: operates modulus.
 * Return: result.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n"), exit(100);
}
