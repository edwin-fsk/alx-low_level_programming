#include "main.h"

/**
 * _isalpha - checks for alphabetic character in alphabets
 * The character to be checked is c
 * Return: 1 if c is a letter, 0 if not a character
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
