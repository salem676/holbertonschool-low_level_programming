/*
 * File: 4-add.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds arguments.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: returns sum of arguments.
 * Return: integer sum.
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;
	/**
	 * @i: counter 1.
	 * @j: counter 2.
	 * @sum: variable to sum arguments.
	 */
	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
