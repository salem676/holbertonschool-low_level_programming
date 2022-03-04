#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the old array.
 * @old_size: size of the memory space to allocate in bytes.
 * @new_size: size of type.
 * Description: reallocates memory block using malloc and free.
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	/**
	 * @newptr: pointer dummy variable.
	 */
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (newptr);
	}
	if (old_size == 0)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		_memcpy(newptr, ptr, old_size);
		free(ptr);
	}
	return (newptr);
}
#include <stdio.h>
/**
 * _memcpy - function that reallocates memory area.
 * @dest: pointer to memory area (dest).
 * @src: pointer to another memory area (src).
 * @n: parameter defined in main, number of bytes to be copied from src.
 * Description: this function copies memory area using malloc and free.
 * Return: memory address of function (memory area)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *tmp = dest;
	/**
	 * @i: counter.
	 * @tmp: temporal pointer.
	 */
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = tmp;
	return (dest);
}
