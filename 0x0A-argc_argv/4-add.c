#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * num - check/iterate each argv to confim if ot is a number
 * @argvv: argv
 * Return: true if the whole string is a number, false if not
 */

bool num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - print the sum if all argument given are number
 * @argc: command argument counter
 * @argv: arguments
 * Return: 0 if successful, 1 if not
 */


int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
