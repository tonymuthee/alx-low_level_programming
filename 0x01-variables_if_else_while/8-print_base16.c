#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char x = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (x < 'g')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
