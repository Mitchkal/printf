#include "main.h"
/**
 * is_conversion_specifier - checks for valid specifier
 * @c : the character to check
 * Return: 1 if true, else 0
 */
int is_conversion_specifier(char c)
{
	print_func_t funcs[] = {
		{'c', NULL},
		{'s', NULL},
		{'%', NULL},
		{'b', NULL},
		{'d', NULL},
		{'i', NULL},
		{'u', NULL},
		{'o', NULL},
		{'p', NULL},
		{'x', NULL},
		{'X', NULL},
		{'\0', NULL}
	};

	int i = 0;

	while (funcs[i].spec)
	{
		if (funcs[i].spec == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
* hand_spec - handles conversion specifier
* @ptr : pointer to argument list
* @spec: conversion specifier character
* Return: number of characters printed
*/
int hand_spec(va_list ptr, char spec)
{
	print_func_t funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'b', print_binary},
		{'d', print_decimal},
		{'i', print_decimal},
		{'u', print_unsigned},
		{'o', print_octal},
		{'P', print_address},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'\0', NULL}
	};
	int i = 0;

	while (funcs[i].spec)
	{
		if (funcs[i].spec == spec)
		{
			int ret = funcs[i].print(ptr);

			return (ret);
		}
		i++;
	}
	return (-1);
}
