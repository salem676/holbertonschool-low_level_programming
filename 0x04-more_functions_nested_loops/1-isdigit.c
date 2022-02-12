/*
 * File: 1-isdigit.c
 * Author: salem676
 */
#include <stdio.h>
/**
 * _isdigit - determines if integer given is digit.
 * @c: integer to be revised.
 * Description: this functions checks if an integer value is a digit.
 * Return: 1 if true and 0 if false.
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
