/*
 * File: 0-whatsmyname.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * mynameis - prints name, new line.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: this function prints function name, followed
 * by a new line.
 * Return: void.
 */
int mynameis(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
