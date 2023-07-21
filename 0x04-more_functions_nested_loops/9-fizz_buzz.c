#include <stdio.h>
/**
  * main -prints numbers from 1 - 100
  *
  * Return:0
  */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	if (num != 100)
	{
		printf("\n");
	}
		return (0);
}