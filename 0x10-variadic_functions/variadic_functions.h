#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct print - multiple choice print.
 * @x: char type of print.
 * @T_func: func.
 */
typedef struct print
{
	char *x;
	void (*T_func)(va_list);
} t_print;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* MAIN_H */
