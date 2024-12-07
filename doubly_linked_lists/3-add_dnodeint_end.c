#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the list_t
 * @n: the integer
 * Return: (newnode) i.e address of the new node, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	newnode->prev = last;

	return (newnode);
}
