#include "main.h"
#include <stdio.h>
/**
 * main - determines if integer given is digit.
 *
 * Return: 1 if true and 0 if false.
 */
int _isdigit(int c)
{
	if(c > 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
