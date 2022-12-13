#include <stdio.h>
#include <stdlib.h>
/**
 * main - main code
 * Despt
 *Return: reasonale value
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
