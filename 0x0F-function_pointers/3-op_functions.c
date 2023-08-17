#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - add
  * op_sub - substract
  * op_mul - multiply
  * op_div - divide
  * op_mod * modulus
  * @a: int
  * @b: int
  */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		 exit(99);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
