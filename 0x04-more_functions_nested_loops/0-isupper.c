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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
