#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer  to a list_t.bc we want to change the head..
 * ..of the list, we pass a pointer to the pointer @head.
 * @str: pointer to a string that will be stored in the new node
 * Nb: str needs to be duplicated, ok to use strdup
 * Return: pointer to the newly added node, ie adress of the new element..
 * .. or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
