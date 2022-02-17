#include <stdio.h>
#include "main.h"
/**
 * rot13 - rot13 string encoder.
 * @s: direction of first element of string.
 * Description: this function encodes a string using ROT13.
 * Return: pointer to char of string.
 */
char *rot13(char *s)
{
	int c1;
	int c2;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/**
	 * @c1: counter 1.
	 * @c2: counter 2.
	 * @normal: represents normal alphabet.
	 * @code: represents displaced alphabet by 13 letters.
	 */
	c1 = 0;
	while (s[c1] != '\0')
	{
		c2 = 0;
		while (normal[c2] != '\0')
		{
			if (s[c1] == normal[c2])
			{
				s[c1] = code[c2];
				break;
			}
			c2++;
		}
		c1++;
	}
	return (s);
}
