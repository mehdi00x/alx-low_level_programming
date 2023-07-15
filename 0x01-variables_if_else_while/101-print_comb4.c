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
	int i, j, w;

	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		while (j < 58)
		{
			w = j + 1;
			while (w < 58)
			{
				putchar(i);
				putchar(j);
				putchar(w);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			w++;
			}
		j++;
		}
	}
	putchar('\n');
	return (0);
}
