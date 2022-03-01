/*
 * File: 1-args.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - product arguments.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: returns product of arguments.
 * Return: void.
 */
int main(int argc, char **argv)
{
	int mul = 0;
	/**
	 * @mul: variable to store mult.
	 */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
