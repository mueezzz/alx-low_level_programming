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
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		
		if (n != 9)
		{
		putchar(',');
		}

		putchar('\t');
		n++;
	}
	putchar('\n');
	return (0);
}
