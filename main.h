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
int _printf(const char *format, ...);

int is_conversion_specifier(char c);
int hand_spec(va_list ptr, char spec);
int print_char(va_list ptr);
int print_string(va_list ptr);
int print_percent(va_list __attribute__((unused)) ptr);
int print_binary(va_list ptr);
int print_decimal(va_list ptr);
int print_decimal_recursion(unsigned int n);
int print_unsign(unsigned int n);
int print_unsigned(va_list ptr);
int print_hex(va_list ptr);
int print_hex_upper(va_list ptr);
int print_octal(va_list ptr);
int print_address(va_list ptr);


int _putchar(char c);
#endif
