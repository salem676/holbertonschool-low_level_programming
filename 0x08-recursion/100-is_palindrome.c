/*
 * File: 100-is_palindrome.c
 * Author: salem676
 */
#include <stdio.h>
#include "main.h"
/**
 * length - obtains length of x.
 * @x: pointer to string.
 * @l: integer to count length.
 * Description: calculates length for x string.
 * Return: -1 if error, 1 if success.
 */
int length(char *x, int l)
{
	if (*x  ==  0)
		return (l - 1);
	return (length(x + 1, l + 1));
}
/**
 * palindrome_helper - compares string against reverse.
 * @x: string to analyze.
 * @l: length.
 * Description: checks palindrome.
 * Return: 1 if succes, -1 if error.
 */
int palindrome_helper(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palindrome_helper(x + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is palindrome.
 * @s: pointer to string.
 * Description: checks palindromic characteristic.
 * Return: 1 or -1.
 */
int is_palindrome(char *s)
{
	int l;
	/**
	 * @l: length variable.
	 */
	l = length(s, 0);
	return (palindrome_helper(s, l));
}
