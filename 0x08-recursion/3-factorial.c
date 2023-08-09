#include"main.h"
/**
  * factorial - function that prints factorial of a given number
  * @n: a given number
  * Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
