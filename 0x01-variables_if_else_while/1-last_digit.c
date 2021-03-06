#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of random
 * number is greater than, less than 5, or is 0
 *
 * Return: 0 if Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n % 10 == 0)
	{
		printf("0\n");
	}
	else if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
