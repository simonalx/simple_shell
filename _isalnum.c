#include "ctype.h"

/**
  * _isalnum - checks if the character is alphanumeric
  * @w: character to check
 * Return: If c is alphanumeric, return 1. Otherwise, return 0.
  */
bool _isalnum(int w)
{
	return (_isalpha(w) || _isdigit(w));
}
