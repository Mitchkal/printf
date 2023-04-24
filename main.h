#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>


/**
 * struct print_func - A structure for format - pointer
 * @spec: the format specifier character
 * @print: printing function for format specifier
 */
typedef struct print_func
{
	char spec;

	int (*print)(va_list);


} print_func_t;

/*wrapper functions*/

int print_char(va_list ptr);
int print_string(va_list ptr);
int print_percent(va_list __attribute__((unused)) ptr);


int _printf(const char *format, ...);
int _putchar(char c);
#endif
