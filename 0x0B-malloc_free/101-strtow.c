/*
 * File: 101-strtow.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strtow - splits string to words.
 * @str: ptr to array.
 * Description: words separated by spaces.
 * NULL if str == NULL or str == "".
 * Return: pointer to array of strings, and NULL if fails.
 */
char **strtow(char *str)
{
	int i, j, k = 0, l, m, count = 0, len;
	char **words;
	/**
	 * @i, @j, @k, @l, @m: counters.
	 * @count: counter.
	 * @length of str.
	 * @words: 2-dim array of char.
	 */
	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' &&  k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			words[k] = malloc((len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				words[k][l] = str[i];
			words[k][l] = '\0', k++;
		}
	}
	words[k] = NULL;
	return (words);
}
