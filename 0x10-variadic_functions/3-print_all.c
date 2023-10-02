#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - prints everything
  * @format: type
  * Return:void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	va_start(ap, format)
	
