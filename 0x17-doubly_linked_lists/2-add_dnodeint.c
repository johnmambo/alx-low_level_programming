#include "lists.h"

/**
 * add_dnodeint - Adds a new node ath the beginning of a dlistit_t list
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * 	Otherwise - the address of the new node.
 */
dlistint_t *ad_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
