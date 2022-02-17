#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compare string.
 * @s1: direction of first element of string 1.
 * @s2: direction of first element of string 2.
 * Description: this function compares two given strings.
 * Return: 0 if equal. Else
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int ans;
	/**
	 * @i
	 * @ans
	 */
	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			ans = (int)(s1[0] - s2[0]);
			break;
		}
		i++;
	}
	if ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		ans = (int)(s1[0] - s2[0]);
	}
	else
	{
		ans = 0;
	}
	return (ans);
}
