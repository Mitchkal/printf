#include "main.h"
/**
 * print_string - prints a string
 * @ptr : pointer the string
 * Return: character count
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
	return (count - 1);
}
