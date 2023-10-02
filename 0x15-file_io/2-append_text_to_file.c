#include "main.h"
/**
  * append_text_to_file - add text to file end
  * @filename: name of file
  * @text_content: the text
  * Return: 1 on success and -1 on failure
  */
 int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

