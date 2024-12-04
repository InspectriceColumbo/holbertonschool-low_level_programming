#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: pointer to the head of the list
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
