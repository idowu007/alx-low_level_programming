#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 * new line, with putchar
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);
	putchar('\n');
	return (0);
}
