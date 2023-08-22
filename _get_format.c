#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int _int(va_list val)
{
	int sum;
	int i, digit, reversed;

	i = va_arg(val, int);
	sum = 0;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		sum++;
	}
	reversed = 0;
	while (i > 0)
	{
		digit = i % 10;
		reversed = reversed * 10 + digit;
		i /= 10;
		sum++;
	}

	while (reversed > 0)
	{
		digit = reversed % 10;

		_putchar('0' + digit);

		reversed /= 10;
	}
	return (sum);
}

int _str(va_list val)
{
	int sum;
	char *s = va_arg(val, char *);
	int i;

	sum = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		_printf("%c", s[i]);
		sum++;
	}
	return (sum);
}

int _char(va_list val)
{
	_putchar(va_arg(val, int));

	return (1);
}

int treat_format(int num, va_list val)
{
	int sum;

	if (num == 1)
		sum =_int(val);
	else if (num == 2)
		sum =_char(val);
	else if (num == 3)
		sum =_str(val);

	return (sum);
}
