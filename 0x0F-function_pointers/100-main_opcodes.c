#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count (number of arguments)
 * @argv: argument vector (array of strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	for (j = 0; j < i - 1; j++)
	{
		printf("%02hhx ", c[j]);
	}
	printf("%02hhx\n", c[j]);
	return (0);
}
