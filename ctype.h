#ifndef _CTYPE_H_
#define _CTYPE_H_

#include <stdbool.h>
#include <stdlib.h>

bool _isalnum(int w);
bool _isalpha(int w);
bool _isdigit(int w);
bool _isident(int w);
bool _isspace(int w);
bool _isquote(int w);
bool _isnumber(const char *d);

#endif /* _CTYPE_H_ */
