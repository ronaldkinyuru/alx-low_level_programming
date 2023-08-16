#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - prints a name
  * @name: name to be printed
  * @f: ptr to function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
