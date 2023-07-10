#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: command argument counter
 * @argv: array of arguments
 * Return: 0 on succcess
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d", argc - 1);

	}
	return (0);
}
