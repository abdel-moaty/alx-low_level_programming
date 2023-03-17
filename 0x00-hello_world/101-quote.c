#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */
int main(void)
{
	const char quote[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, quote, sizeof(quote) - 1);
	return (1);
}
