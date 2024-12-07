#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node we want to retrieve, starts at 0
 * Return: the nth node in the linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;/* This initializes a counter j to zero. This will keep..
			     * track of the current position (index) in the list as we traverse..
			     * it. We will compare this counter to the given index to determine..
			     * when we reach the desired node.*/

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}

		head = head->next;
		j++;
	}

	return (NULL);
}
