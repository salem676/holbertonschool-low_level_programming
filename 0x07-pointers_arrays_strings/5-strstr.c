/*
 * File: 5-strstr.c
 * Author: salem676
 */
#include "main.h"
/**
  * _strstr - locate a substring.
  * @haystack: the string to search.
  * @needle: the string to find.
  * Description: as above.
  * Return: char value.
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;
	/*
	 * @a: counter.
	 * @b: counter.
	 */
	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
