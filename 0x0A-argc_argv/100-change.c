/*
 * File: 100-change.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * change - prints change.
 * @argc: argument counter.
 * @argv: argument vector.
 * Description: prints minimum number of coins
 * to make change for an amount of money.
 * Return: int.
 */
int change(int argc, char **argv)
{
	int i;
	int num;
	int amount = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	/**
	 * @i: counter.
	 * @num: counter.
	 * @amount: variable to sum arguments.
	 * @coins: array with coin types.
	 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if ((num / coins[i]) > 0)
		{
			amount = amount + num / coins[i];
			num = num % coins[i];
		}
	}
	printf("%d\n", amount);
	return (0);
}
