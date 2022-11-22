<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);
int print_u(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int print_X(va_list ar_list);
>>>>>>> 4ef18a312927d6a549af4489889c56682594dc76

#endif
