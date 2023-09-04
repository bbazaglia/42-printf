
/* 

va_list: typically implemented as pointer to a structure that holds information about the variable arguments
-> when declaring a variable of type va_list, it's not necessary to use the * operator, because va_list is already a pointer type
-> you can pass the va_list variable directly to va_start, va_arg, va_copy, and va_end to access the individual arguments in the list

*/

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    // ap (argument pointer)
    va_list ap;
    int count; 

    va_start(ap, format);
    count = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += ft_putchar(va_arg(ap, int));
            else if (*format == 's')
                count += ft_putstr(va_arg(ap, char *));
            else if (*format == 'd')
                count += ft_putnbr(va_arg(ap, int));
            /* else if (*format == 'x')
                count += ft_puthex(va_arg(ap, unsigned int));
            else if (*format == 'X')
                count += ft_putHex(va_arg(ap, unsigned int));
            else if (*format == 'p')
                count += ft_putptr(va_arg(ap, void *)); */
            else if (*format == '%')
                count += ft_putchar('%');
        }
        else
            count += ft_putchar(*format);
        format++;
    }
}