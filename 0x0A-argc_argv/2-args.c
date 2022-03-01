/*
 * File: 2-args.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * main - prints arg number, new line.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: this function prints number of args, followed
 * by a new line.
 * Return: void.
 */
int main(int argc, char **argv)
{
	int i = 0;
	/**
	 * @i: counter.
	 */
	if (argc >= 1)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
