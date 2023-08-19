#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints strings
  * @separator: printed between string
  * @n: num ofstrings passed to function
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(ap, char *);

		if (s != NULL)
		{
		printf("%s", s);
		}
		else
		{
			printf("(nil)");
			continue;
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
