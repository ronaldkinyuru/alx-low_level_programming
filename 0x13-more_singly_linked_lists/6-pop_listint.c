#include "lists.h"
/**
  * pop_listint - remove head
  * @head
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
