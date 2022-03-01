/*
 * File: 3-alloc_grid.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - ptr to 2-dim array of int.
 * @width: of 2-dim array.
 * @height: of 2-dim array.
 * Description: each element init with 0;
 * if parameters 0 or negative, return NULL.
 * Return: ptr to ptr to int; ptr to a 2-dim array of int.
 */
int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **grid;
	/**
	 * @i: counter.
	 * @j: //.
	 * @k: //.
	 * @m: //..
	 * @n: //..
	 * @grid: pointer to grid.
	 */
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}
	return (grid);
}
