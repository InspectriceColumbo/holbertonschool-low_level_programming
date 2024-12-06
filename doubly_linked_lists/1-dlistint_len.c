#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count_node = 0; /* comme T0 mais sans printf */

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
