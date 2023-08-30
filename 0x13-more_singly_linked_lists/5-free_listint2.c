#include "lists.h"
/**
  * free_listint2 - free list make head null
  * @head: head of list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
