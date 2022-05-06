/*
 * Filename: 7-insert_dnodeint.c
 * Author: salem676
 */
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Description: as above.
 * Return: the address of the new node, or NULL if it failed.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentnode;
	dlistint_t *newnode;
	/*
	 * @currentnode: pointer to current.
	 * @newnode: pointer to new.
	 */
	while (*h)
	{
		newnode = malloc(sizeof(dlistint_t));
		currentnode = *h;
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = NULL;
			return (newnode);
		}
		while (currentnode->next != NULL && idx - 1 > 0)
		{
			currentnode = currentnode->next;
			idx--;
		}
		if (currentnode->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = currentnode->next;
		currentnode->next = newnode;
		return (newnode);
	}
	return (NULL);
}
