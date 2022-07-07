#include "main.h"

/**
 * print_square - print square
 * @size: input parameters as size
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_puchar('\n');
}