#include <stdio.h>
#include "main.h"

/**
 * main - program that prints it's name
 * @argc: command argument counter
 * @argv: array of argument counter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
