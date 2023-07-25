#include <stdio.h>
#include "main.h"
/**
  * print_array - prints array elements
  * @a: the array
  * @n: number of array
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
