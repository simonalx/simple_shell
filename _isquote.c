#include "ctype.h"

/**
 * _isquote - check if a character is a quote
 * @w: the character to check
 * Return: If c is a quote, return 1. Otherwise, return 0.
 */
bool _isquote(int w)
{
	return (w == '"' || w == '\'' || w == '\\');
}
