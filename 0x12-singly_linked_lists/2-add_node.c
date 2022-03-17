/*
 * File: 2-add_node.c
 * Author: salem676
 */
#include "lists.h"
/**
 * add_node - function adds new node to beginning of list.
 * @head: pointer to pointer of head of linked list.
 * @str: const char pointer to string.
 * Description: as above stated.
 * Return: address of new element, or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int x;
	/*
	 * @nstr: pointer to string .
	 * @newhead: new node to be added.
	 * @x: functions as counter and len.
	 * The strdup() function returns a pointer to a new
	 * string which is a duplicate of the string.
	 */
	if (!nstr)
		return (NULL);
	for (x = 0; nstr[x] != '\0'; x++)
	{
		;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(nstr);
		return (NULL);
	}
	newhead->str = nstr;
	newhead->len = x;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
