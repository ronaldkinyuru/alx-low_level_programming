#include "main.h"
/**
  * puts_half - prints second half length of a string
  *@str: string to be printed
  * Return: void
  */
void puts_half(char *str)
{
	int counter, n;

	counter = 0;
	while (str[counter] != '\0') /* counts string chars*/
	{
		counter++;
	}
	if (counter % 2 == 0) /* checks even*/
	{
		n = counter / 2;
	}
	else /*odd*/
	{
		n = (counter - 1) / 2;
	}
	while (str[n] != '\0')
	{
			_putchar(str[n]);
			n++;
	}
	_putchar('\n');
}
