/*
 * File: 4-free_list.c
 * Author: salem676
 */
#include "lists.h"
/**
 * *free_list - function frees a list_t list.
 * @head: pointer to pointer of head of linked list.
 * Description: as stated above.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *temp;
	/*
	 * @node: pointer to list_t type with head.
	 * @temp: temporal pointer used.
	 */
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->str);
		free(temp);
		head = NULL;
	}
}
