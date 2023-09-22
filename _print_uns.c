#include "main.h"
/**
 * _print_int - pritn number
 *@n: input parameter
 *Return: void
*/

void _print_int_u(unsigned int n)
{
	unsigned int m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -1 * m;
	}
	if (m / 10)
	{
		_print_num(m / 10);
	}
	_putchar((m % 10) + '0');
}

/**
 * _print_num - print number
 * @n: input number
 * Return: lenght of n
 */

int _print_uns(unsigned int n)
{
	unsigned int x = n;
	int len = 1;

	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	_print_int_u(x);
	return (len);
}
