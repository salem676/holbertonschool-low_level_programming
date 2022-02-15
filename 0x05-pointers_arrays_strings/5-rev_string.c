/*
 * File: 5-rev_string.c
 * Author: salem676
 */
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * rev_string - reverse string.
 * @s: direction of first position of string.
 * Description: this function reverses a string.
 * Return: void.
 */
void rev_string(char *s)
{
	int len;
	int i;
	char *last;
	char dum;
	/**
	 * @len: variable that stores lenght of str.
	 * @i: used as counter.
	 * @last: pointer to last letter.
	 * @dum: dummy variable.
	 */
	len = _strlen(s);
	i = 0;
	last = s + len;
	while (i < len / 2)
	{
		dum = *s;
		*s = *last;
		*last = dum;
		s++;
		last--;
		i++;
	}
	s = s - 3;
	_puts(s);
}

/**
 * _strlen - give lenght of string.
 * @s: direction of first element of string
 * Description: this functions returns the lenght of a given string.
 * Return: string lenght.
 */
int _strlen(char *s)
{
	int count;
	/**
	 * @count: counts.
	 */
	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * _puts - determines if integer given is digit.
 * @str: direction of first position of string.
 * Description: this function prints a string, followed by a line, to stdout.
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

