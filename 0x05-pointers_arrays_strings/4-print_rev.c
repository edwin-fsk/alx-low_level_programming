#include "main.h"
/**
 * print_rev - ver tnirp
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int loR = 0;
	int r;

	while (*s != '\0')
	{
		loR++;
		s++;
	}
	s--;
	for (r = loR; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

