#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: integer to check
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
