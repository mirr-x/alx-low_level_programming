#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the two diagonals of a square matrix.
 * @a: A pointer to the beginning of the square matrix.
 * @size: The size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
