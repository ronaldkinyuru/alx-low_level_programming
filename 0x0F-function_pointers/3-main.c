#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - 
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (argv == NULL || argc != 4)
	{
		printf("Error\n");
		exit (98);

	}
	if (get_op_func(operator)

/**
*	op_t *ptr;
*	op_t mypoint;
*	ptr = mypoint;
*
*	if (ptr == NULL)
*	{
*		return (NULL);
*	}
*	ptr->op = argv[1];
*	ptr->f(int a , int b) = nu
*/
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);

}

