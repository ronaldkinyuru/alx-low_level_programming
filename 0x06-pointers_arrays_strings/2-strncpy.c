#include "main.h"
/**
  * _strncpy-copies string
  * @dest: destination to copy string
  * @src: source of string
  * @n: elements to be copied
  * Return:dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
			counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
