/*
 * Filename: 8-delete_dnodeint.c
 * Author: salem676
 */
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Description: as above.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next;
	unsigned int i;
	/*
	 * @temp: temp pointer.
	 * @next: next pointer.
	 * @i: counter.
	 */
	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
