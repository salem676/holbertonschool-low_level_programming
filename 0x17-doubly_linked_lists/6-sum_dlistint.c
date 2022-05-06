/*
 * Filename: 6-sum_dlistint.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a dlistint_t linked list.
 * @head: head of linked list.
 * Description: as above.
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int result = 0;
	/*
	 * @result: variable for calc.
	 */
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
