#include "ctype.h"

/**
  * _isalpha - checks if the character is alphabetic
  * @w: character to check
 * Return: If c is alphabetic, return 1. Otherwise, return 0.
  */
bool _isalpha(int w)
{
	return ((w >= 'A' && w <= 'Z') || (w >= 'a' && w <= 'z'));
}
