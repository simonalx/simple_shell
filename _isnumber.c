#include "ctype.h"

/**
  * _isnumber - check if a string consists only of digits
  * @d: pointer to string
  * Return: true or false
  */
bool _isnumber(const char *d)
{
	if (d)
	{
		while (*d)
		{
			if (!_isdigit(*d++))
				return (false);
		}
		return (true);
	}
	return (false);
}
