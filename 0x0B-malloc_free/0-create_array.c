/*
 * File: 0-create_array.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array with char.
 * @size: size of array.
 * @c: char value used to initialize.
 * Description: this function creates an array of chars and
 * initializes it with an specific char.
 * Return: pointer to char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptrArray;
	/**
	 * @i: counter.
	 * @ptrArray: pointer to array.
	 */
	if (size == 0)
		return (NULL);
	ptrArray = malloc(size * sizeof(char));
	if (ptrArray == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptrArray[i] = c;
		i++;
	}
	return (ptrArray);
}
