#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - function that inserts a number into singly linked list.
 * @head: singly linked list pointer
 * @number: new node value.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	int flag = 0;
	listint_t *new_node = NULL, *old = NULL, *after = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = number, new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	old = *head;
	if (number <= old->n)
	{
		new_node->next = old, *head = new_node;
		return (*head);
	}
	if (number > old->n && !old->next)
	{
		old->next = new_node;
		return (new_node);
	}
	after = old->next;
	while (old)
	{
		if (!after)
			old->next = new_node, flag = 1;
		else if (after->n == number)
			old->next = new_node, new_node->next = after, flag = 1;
		else if (after->n > number && old->n < number)
			old->next = new_node, new_node->next = after, flag = 1;
		if (flag)
			break;
		after = after->next, old = old->next;
	}
	return (new_node);
}
