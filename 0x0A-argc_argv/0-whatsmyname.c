/*
 * File: 0-whatsmyname.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * main - prints name, new line.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: this function prints function name, followed
 * by a new line.
 * Return: void.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
