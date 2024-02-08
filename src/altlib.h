#ifndef ALTLIB_H
#define ALTLIB_H
#include "stdio.h"

int alt_tolower(int c);
int alt_isalpha(int c);
int alt_toupper(int c);
int alt_isdigit(int c);
int alt_isalnum(int c);
int alt_isascii(int c);
int alt_isprint(int c);
int alt_strlen(const char *s);
void *alt_memset(void *b, int c, size_t len);


#endif
