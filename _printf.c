#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int check_format(char test)
{
	size_t i;
	form forms[] = {{'d', 1},
			{'c', 2},
			{'s', 3},
			{'p', 4},
			{'x', 5},
			{'X', 6},
			{'o', 7},
			{'u', 8},
			{'e', 9},
			{'E', 9},
			{'g', 10},
			{'G', 10},};
	for (i = 0;i < 12; i++)
	{
		if (forms[i].a ==  test)
			return (forms[i].position);
	}
	return (0);
}

/**
 * _printf - prints out the character passed into it
 * @format: strings that will be passed into the function 
 * Returns : an integer 0
 *
 */
int _printf(const char *format, ...)
{
	va_list ap;
	size_t i;
	int s;

	va_start(ap, format);

	if (!format)
	{
		_printf("error format is null");
		exit(99);
	}


	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] == '%' && i < strlen(format) - 1)
		{
			s =  check_format(format[i + 1]);
			if (s)
			{
				treat_format(s, ap);
			}
			i = i + 2;
		}
		putchar(format[i]);
	}
	va_end(ap);
	return (0);
}
