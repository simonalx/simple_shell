#include "ctype.h"

/**
 * _isspace - check if a character is whitespace
 * @w: the character to check
 * Return: If c is whitespace, return 1. Otherwise, return 0.
 */
bool _isspace(int w)
{
	return (w == ' ' || (w >= 0x09 && w <= 0x0d));
}
