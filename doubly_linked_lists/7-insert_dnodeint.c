#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node node at a given position
 * @h: pointer to the head of the list
 * @index: index 
 * @n: integer
 * Return: New node's adress, or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	*current_node = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (index == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current_node == NULL)
		{
			free(newnode);
			return (NULL);
		}
		current_node = current_node->next;
	}
	
	if (current_node == NULL)
	{
		free(newnode);
		return (NULL);
	}
	
	newnode->next = current_node->next;
	newnode->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = newnode;
	current_node->next = newnode;

	return (newnode);
}
