#include "main.h"
/**
 * print_string - prints a string
 * @ptr : the string pointer
 * Return: 1 if success, 0 if not
 */
int print_string(va_list ptr)
{
	int count = 0;
	char *str = va_arg(ptr, char*);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
