#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main code
 * Description:this
 * Return: 0 ff
 */
int main(void)
{
	char n = '0';

	while(n <= '9')
	{
		putchar(n);
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
