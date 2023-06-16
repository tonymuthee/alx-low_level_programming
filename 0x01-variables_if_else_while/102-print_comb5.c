#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/**int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 9; d++)
	{
		if (c < a || c < b || d < b)
	{
		continue;
	}
	else if (a == c && b == d)
	{
		continue;
	}
	putchar(a + '0');
	putchar(b + '0');
	putchar(' ');
	putchar(c + '0');
	putchar(d + '0');
	if (a == 9 && b == 8 && c == 9 && d == 9)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}*/
int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
