#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - find it
 * Description: aout my prog
 * Return: 0 ow
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}

	putchar('\n');
	return (0);
}
