#include "lists.h"

/**
* add_dnodeint - a function that adds a new node at
*the beginning of a dlistint_t list.
* @head: pointer that point to a linked list
* @n: the data in the node
* Return: the address of the new element, or NULL if it failed
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (!head)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
