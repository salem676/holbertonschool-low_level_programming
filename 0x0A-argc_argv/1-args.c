/*
 * File: 1-args.c
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
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
