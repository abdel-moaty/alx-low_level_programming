#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int first_num = 0, second_num = 1, next_num = 2,
		second_num_part1, second_num_part2,
		next_num_part1, next_num_part2;


	printf("%lu", second_num);

	for (first_num = 1; first_num < 91; first_num++)
	{
		printf(", %lu", next_num);
		next_num = next_num + second_num;
		second_num = next_num - second_num;
	}
	second_num_part1 = second_num / 1000000000;
	second_num_part2 = second_num % 1000000000;
	next_num_part1 = next_num / 1000000000;
	next_num_part2 = next_num % 1000000000;

	for (first_num = 92; first_num < 99; ++first_num)
	{
		printf(", %lu", next_num_part1 + (next_num_part2 / 1000000000));
		printf("%lu", next_num_part2 % 1000000000);
		next_num_part1 = next_num_part1 + second_num_part1;
		second_num_part1 = next_num_part1 - second_num_part1;
		next_num_part2 = next_num_part2 + second_num_part2;
		second_num_part2 = next_num_part2 - second_num_part2;
	}
	printf("\n");
	return (0);
}
