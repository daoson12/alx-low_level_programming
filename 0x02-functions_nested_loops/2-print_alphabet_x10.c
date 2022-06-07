#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0;
 *
 */
int main(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
