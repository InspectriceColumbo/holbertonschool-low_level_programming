#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to the head of the list
 * @n: integer to add in the list
 * Return: Adress of the new element, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes = malloc(sizeof(dlistint_t));
	/** This line allocates memory for a new node w malloc. sizeof(dlistint_t)..
	 * determines the amount of memory needed based on the size of the..
	 * dlistint_t structure */

	if (new_nodes == NULL)
	{
		return (NULL);
	}

	/** These lines initialize the new node */
	new_nodes->n = n; /*stores the passed integer n in the nodes n field*/
	new_nodes->prev = NULL; /*sets the prev pointer to NULL, since the..
				 *new node will be the 1st node in the list */
	new_nodes->next = *head;/*links the new node to the current head of..
 * the list. This means that the new node's next..
 * pointer points to the current first node of the list */

	if (*head != NULL)
	{
		(*head)->prev = new_nodes; /** This checks if the list is not empty (i.e., *head != NULL). If the list has existing nodes, it updates the prev pointer of the current head node to point back to the new node, establishing the backward link in the doubly linked list. */
	}

	*head = new_nodes;/* This updates the head pointer to point to the new node, making it the first node in the list.*/

	return (new_nodes);
}
