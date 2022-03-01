/*
 * File: 100-argstostr.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates arguments.
 * @ac: argument counter.
 * @av: ptr to a string of ptrs to strings.
 * Description: concatenates arguments of program.
 * Return: address of newly allocated memory, NULL if ac == 0
 * or ac == NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int sumlen = 0;
	char *arg_concat;
	/**
	 * @i: counter 1.
	 * @j: counter 2.
	 * @k: counter 3.
	 * @sumlen: sums length.
	 * @arg_concat:
	 */
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sumlen++;
		sumlen++;
	}
	sumlen++;
	arg_concat = malloc(sumlen * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			arg_concat[k] = av[i][j];
		}
		arg_concat[k] = '\n';
		k++;
	}
	return (arg_concat);
}
