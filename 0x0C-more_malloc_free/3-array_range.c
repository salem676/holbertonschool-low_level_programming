#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimal int defined in main.
 * @max: maximal int defined in main.
 * Description: creates array of integers from min to max in order.
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int a;
	int i;
	int *ptr;
	int *tmp;
	/**
	 * @a: temporal variable.
	 * @i: counter.
	 * @ptr: pointer to return.
	 * @tmp: temporal pointer variable.
	 */
	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	tmp = ptr;
	a = min;
	for (i = 0; i < ((max - min) + 1) ; i++)
	{
		*ptr = a;
		ptr++;
		a++;
	}
	ptr = tmp;
	return (ptr);
}
