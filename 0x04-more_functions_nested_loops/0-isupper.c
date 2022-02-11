#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if variabe is uppercase.
 * @c: is the character to check.
 * Description: Function that checks if character is uppercase.
 * Return: 1 if true and 0 if false.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
