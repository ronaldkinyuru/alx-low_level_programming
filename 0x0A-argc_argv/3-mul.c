#include <stdio.h>
#include <stdlib.h>
/**
  * main- multiplies 2 numbers
  * @argc: argument count
  * @argv: arguments vector
  * Return: 0 always success 1 error
  */
int main(int argc, char **argv)
{
	if (argc >  2)
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
