#include"main.h"

/**
  * _puts - prints string, followed by a new line
  * @str: characters of the string
  * Return: void
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	str++;
	}
	_putchar('\n');
}
