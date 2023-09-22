#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(char *str);
int _puts(char *str);
void _print_int(int long n);
int _print_num(int long n);
int _print_sp(const char *format, va_list args);
void _print_int_u(unsigned int);
int _print_uns(unsigned int);
int _binary(int n);

#endif
