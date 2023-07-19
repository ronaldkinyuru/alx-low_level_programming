#include "main.h"

/**
 * times_table - Prints the n times tables
 * @n: number times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, op;

		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				op  = a * b;
				if (b == 0)
				{
					_putchar(op + 48);
				}
				if (op < 10 && b != 0)
				{
					_putchar(32);
					_putchar(' ');
					_putchar(' ');
					_putchar(op + 48);
				}
				else if (op >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((op % 10) + 48);
					_putchar((op % 10) + 48);
				}
			}
			_putchar('\n');
			}
			}
