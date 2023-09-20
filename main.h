#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(char *str);
int _puts(char *str);
void _print_int(int n);
int _print_num(int n);
int _print_sp(const char *format, va_list args);
int _peint_un(unsigned int);
int _binary(int n);

#endif
