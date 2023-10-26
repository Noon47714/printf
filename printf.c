#include "main.h"

/**
 *_printf - print output according to format
 * @format: format of arg to be printed
 * Return: no of char
 */

int _printf(const char *format, ...)

{
	va_list args;
	int printed_beasts = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;
	}
	return (printed_beasts);
}
