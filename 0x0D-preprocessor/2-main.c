/*
 * File: 1-strncat.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 * main - program that prints the name of the file it was compiled from
 * followed by a new line.
 * Description: as above.
 * Return: zero.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
