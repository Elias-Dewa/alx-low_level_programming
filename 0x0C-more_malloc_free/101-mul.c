#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two positive numbers
 * @argc: input integer as argument
 * @argv: double pointer of characters
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
