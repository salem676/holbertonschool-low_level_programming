/*
 * File: 0-malloc_checked.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory space for byte allocation.
 * Description: as above.
 * Return: pointer to void.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	/**
	 * @ptr: ptr to be returned.
	 */
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
