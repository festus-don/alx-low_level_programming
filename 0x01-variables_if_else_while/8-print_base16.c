#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}

	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
