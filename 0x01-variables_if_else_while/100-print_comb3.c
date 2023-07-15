#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
	}
	return (0);
}
