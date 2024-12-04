#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer to a pointer to head of a list_t.
 * @str: pointer to a string that we want to store in a new node at the end
 * Nb: str needs 2B duplicated
 * Return: the adress of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	char *newstring;
	unsigned int length = 0;
	list_t *final = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newstring = strdup(str);
	if (newstring == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (str[length])
		length++;

	newnode->str = newstring;
	newnode->len = length;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (final->next != NULL)
		final = final->next;

	final->next = newnode;
	return (newnode);
}
