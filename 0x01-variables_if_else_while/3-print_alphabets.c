#include <stdio.h>
/**
  *main - Entry point
  *Description:'print alphabets'
  *Return: always 0
  */
int main(void)
{
	int l = 97;
	int u = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar ('\n');
	return (0);
}
