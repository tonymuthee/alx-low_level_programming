#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';

	do {
		if (x == 'e')
		{
			x = x + 1;
			continue;
		}
		else if (x == 'q')
		{
			x = x + 1;
			continue;
		}
		putchar(x);
		x++;
	} while (x <= 'z');
	putchar('\n');
	return (0);
}
