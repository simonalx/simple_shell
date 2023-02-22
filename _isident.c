#include "ctype.h"

/**
  * _isident - checks if the character is a valid identifier character
  * @w: character to check
 * Return: If c is an identifier character, return 1. Otherwise, return 0.
  */
bool _isident(int w)
{
	return (w == '_' || _isalnum(w));
}
