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
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('$');
	return (0);
}
