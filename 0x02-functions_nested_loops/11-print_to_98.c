#include <stdio.h>
/**
 * print_to_98 - prints number to 98
 * @n: starting number
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n >= 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", n);
}
