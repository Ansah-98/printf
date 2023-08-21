#include <stdlib.h>
#include <stdarg.h>

typedef struct formats{
	char a;
	int position;
} form;
void _int(va_list val);
void _char(va_list val);
void _str(va_list val);
void treat_format(int num, va_list val);
int check_format(char test);
int _printf(const char *format, ...);


