/*
 * File: 8-sum_listint.c
 * Author: salem676
 */
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - return sum of list data.
 * @head: head node.
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	/*
	 * @sum: sum of integers of list.
	 */
	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
