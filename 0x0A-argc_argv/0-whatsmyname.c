#include <stdio.h>
#include "main.h"

/**
 * main - prints program name, followed by a new line
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
