#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 *@Cspecs: for test characters.
 * Return: int, number of characters printed, 
 */

typedef struct Cspecs
{
char cs;
void (*f)();
} cs_t;

int _printf(const char *format, ...);
void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
char *inttobinary(va_list list);

#endif
