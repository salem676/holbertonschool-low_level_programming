/*
 * File: 4-free_grid.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees mem of grid.
 * @grid: ptr to 2-dim array.
 * @height: of 2-dim array.
 * Description: frees memory of grid;
 * it is used with previous archive 3-alloc_grid.c .
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
