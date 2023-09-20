#include "main.h"

/**
 *  _print_sp - function check ifthe format is
 *  d or i or c or s or %
 * @format: format
 * @args: args
 * Return: count
 */

int _print_sp(const char *format, va_list args)
{
	int count = 0;

	if (*format == 'c')
		count += _putchar(va_arg(args, int));
	else if (*format == 's')
	{
			count += _print_str(va_arg(args, char*));
	}
	else if (*format == '%')
		count += _putchar('%');
	else if (*format == 'd')
		count += _print_num(va_arg(args, int));
	else if (*format == 'i')
		count += _print_num(va_arg(args, int));
	else if (*format == 'b')
		count += _binary(va_arg(args, int));
	else
	{
		count += _putchar('%');
		count += _putchar(*format);
	}
	return (count);
}
