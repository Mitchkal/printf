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
* handle_conversion_specifier - handles conversion specifier
* @ptr : pointer to argument list
* @spec: conversion specifier character
* Return: number of characters printed
*/
int handle_conversion_specifier(va_list ptr, char spec)
{
	print_func_t funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (funcs[i].spec)
	{
		if (funcs[i].spec == spec)
		{
			return (funcs[i].print(ptr));
		}
		i++;
	}
	return (0);
}
