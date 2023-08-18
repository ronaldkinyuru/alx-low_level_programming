<<<<<<< HEAD
#include "function_pointers.h"
=======
#include"function_pointers.h"
>>>>>>> b1ffe426e6b1fdb141963479422f6647f9bb1ff3
/**
  * print_name - prints name
  * @name: pointer to name
  * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
<<<<<<< HEAD
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
=======
	if (name && f)
>>>>>>> b1ffe426e6b1fdb141963479422f6647f9bb1ff3
		f(name);
}
