#include "lists.h"

/**
* add_nodeint - add node to beginning ot listint_t
* @head: pointer to head of element
* @n: number to be added
* Return: address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
