#include "main.h"

/**
 * _binary - the binary function
 * @n: an integer
 * Return: i
 */

int _binary(int n)
{
	int binary[32], count = 0, i = 0, j = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n > 0)
	{
		binary[i++] = n % 2;
		n /= 2;
		count++;
	}
	for (j = 0; j < i; j++)
		_print_num(binary[i - j - 1]);
	return (count);
}
