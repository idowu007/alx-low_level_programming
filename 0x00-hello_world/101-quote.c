#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 2;

	write(n, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
