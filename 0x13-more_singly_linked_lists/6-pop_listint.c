/*
 * File: 6-pop_listint.c
 * Author: salem676
 */
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deleted head node
 * @head: head node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;
	/*
	 * @second: pointer to listint_t variable.
	 * @data: integer data.
	 */
	if (!head || !*head)
		return (0);
	data = (*head)->n;
	second = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = second;
	return (data);
}
