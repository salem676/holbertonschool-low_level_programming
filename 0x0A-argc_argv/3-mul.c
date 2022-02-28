/*
 * File: 1-args.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * mul - product arguments.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: returns product of arguments.
 * Return: void.
 */
int mul(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		return ((int)argv[argc - 1] * (int)argv[argc - 2]);
	}
	return (0);
}
