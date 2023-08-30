#include "lists.h"
/**
  * sum_listint- sums node values
  * @head: start of node
  * Return:sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	sum += head->n;
	head = head->next;
	return (sum + sum_listint(head));
}
