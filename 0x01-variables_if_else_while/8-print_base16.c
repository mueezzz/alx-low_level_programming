#include <stdio.h>
#include <stdlib.h>
/**
 * main -main funct
 * Description: about me
 * Return: 0 koon
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
