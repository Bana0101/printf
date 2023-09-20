#include "main.h"
/**
 * _putchar - print charcter
 * @c: char
 * Return: 1
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _puts - print a string
 * @str: string
 * Return: integer
 */

int _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);

}

