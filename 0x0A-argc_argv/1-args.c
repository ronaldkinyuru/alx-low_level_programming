#include <stdio.h>
/**
  * main - print argument count
  * @argc:argument count
  * @argv:argument vector
  * Return: 0 always success
  */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
