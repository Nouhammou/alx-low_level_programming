#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		 _putchar('\n');
	}
}
