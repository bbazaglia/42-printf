#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_putchar(int c);
int ft_putstr(char *str);
int	ft_putnbr(int n);
int ft_putptr(void *ptr);
int ft_puthex(unsigned int num);
int ft_putHex(unsigned int num);


#endif