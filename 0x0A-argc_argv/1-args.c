/*
 * File: 1-args.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * nargs - prints arg number, new line.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: this function prints number of args, followed
 * by a new line.
 * Return: void.
 */
int nargs(int argc, char **argv)
{
	if (argc >= 1)
	{
		return (argc);
	}
	return (0);
}
