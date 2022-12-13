#include <stdlib.h>
#include <stdio.h>
/**
 * main - min function
 * Description - about small letters
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
