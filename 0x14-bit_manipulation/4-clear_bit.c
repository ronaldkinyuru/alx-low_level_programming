#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @index: index, starting from 0 of the bit you want to set
 * @n: number to be operated on
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1UL << index;

	*n = (*n & ~mask);

	return (1);
}
