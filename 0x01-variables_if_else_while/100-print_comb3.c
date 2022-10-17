#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = 48; m < 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 56 && m == 56)
				continue;
		
			putchar(',');
			putchar(' ');
			
		}
	}
	putchar('\n');
	return (0);
}
