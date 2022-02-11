#include "main.h"
#include <stdio.h>
/**
 * main - check if variabe is uppercase.
 *
 * Return: 1 if true and 0 if false.
 *
 */
int _isupper(int c)
{
	/**
	 * c - is the character to check.
	 *
	 * Description: this part refers to variable declaration.
	 */
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 97 && c < 123)
	{
		return (0);
	}
}
