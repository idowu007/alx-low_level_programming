#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints all arguments it receives
 * @argc: command argument counter
 * @argv: array of argument
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
