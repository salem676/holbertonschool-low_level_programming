/*
 * File: 1-array_iterator.c
 * Author: salem676.
 * Date: 3/9/2022.
 */
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to a name, passed from main file.
 * @size: size of the array.
 * @action: function pointer.
 * Description: this function executes a function given as a parameter on each
 * array element.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	/**
	 * @i: counter used to access a move in array.
	 */
	if ((*action) != NULL && array != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
