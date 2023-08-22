#include "main.h"
#include <stdio.h>
int main() {
	int result_int;
	int result_str;
	int result_char;
	int result;


		result_int = _printf("%d\n", 42);
	    printf("Total characters printed (Test Case for _int): %d\n", result_int);

		      result_char = _printf("%c\n", 'A');
		         printf("Total characters printed (Test Case for _char): %d\n", result_char);
		

		                 result_str = _printf("%s\n", "Hello, World!");
		                     printf("Total characters printed (Test Case for _str): %d\n", result_str);
		 result = _printf("Integer: %d, Character: %c, String: %s\n", 42, 'A', "Hello, World!");
		    printf("Total characters printed: %d\n", result);

		                     

	return 0;
}

