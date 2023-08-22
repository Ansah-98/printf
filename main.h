#include <stdlib.h>
#include <stdarg.h>

typedef struct formats{
	char a;
	int position;
} form;
int _int(va_list val);
int _char(va_list val);
int _str(va_list val);
int treat_format(int num, va_list val);
int check_format(char test);
int _printf(const char *format, ...);
void _putchar(char c);
