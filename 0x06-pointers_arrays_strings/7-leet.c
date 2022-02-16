#include <stdio.h>
#include "main.h"
/**
 * leet - encode 1337.
 * @s: direction of first element of string
 * Description: this function encodes string into 1337..
 * Return: pointer to char (string).
 */
char *leet(char *s)
{
	int c1;
	int c2;
	char numbers[] = {'4', '3', '0', '7', '1'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	/**
	 * @c1: counter 1.
	 * @c2: counter 2.
	 * @numbers: array with numbers used.
	 * @uppercase: array with uppercase letters.
	 * @lowercase: array with lowercase letters.
	 */
	c1 = 0;
	while (s[c1] != '\0')
	{
		for (c2 = 0; c2 <= 4; c2++)
		{
			if ((s[c1] == uppercase[c2]) || (s[c1] == lowercase[c2]))
			{
				s[c1] = numbers[c2];
			}
		}
		c1++;
	}
	return (s);
}
