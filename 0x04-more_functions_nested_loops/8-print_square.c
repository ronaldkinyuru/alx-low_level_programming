#include "main.h"
/**
 * print_square - Print a sqaure
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
