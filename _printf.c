#include "main.h"
/**
 * _printf - printf function
 * @format: the format
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		switch (*format)
		{
			case '%':
				format++;
				switch (*format)
				{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _print_str(va_arg(args, char*));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += _print_num(va_arg(args, int));
					break;
				case 'i':
					count += _print_num(va_arg(args, int));
					break;
				}
				break;
			default:
				count += _putchar(*format);
				break;
		}
		format++;
	}
		va_end(args);
	return (count);
}
