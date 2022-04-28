#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head node
 * Return: pointer to head node, NULL if fails
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (*head == NULL)
		return (NULL);

	prev_node = *head;
	next_node = (*head)->next;
	prev_node->next = NULL;

	while (next_node != NULL)
	{
		*head = next_node;
		next_node = next_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
	}

	return (*head);
}
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
