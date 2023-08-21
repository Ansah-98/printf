#include "main.h"
#include <stdio.h>
#include <stdarg.h>
void _int(va_list val)
{
	int i, digit, reversed;

	i = va_arg(val, int);

	if (i < 0)
	{
		putchar('-');
		i = -i;
	}
	reversed = 0;
	while (i > 0)
	{
		digit = i % 10;
		reversed = reversed * 10 + digit;
		i /= 10;
	}

	while (reversed > 0)
	{
		digit = reversed % 10;

		putchar('0' + digit);
		reversed /= 10;
	}
}
void _str(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		_printf("%c", s[i]);
}

void _char(va_list val)
{
	putchar(va_arg(val, int));
}
void treat_format(int num, va_list val)
{
	if (num == 1)
		_int(val);
	else if (num == 2)
		_char(val);
	else if (num == 3)
		_str(val);
}
