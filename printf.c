
/* Notes:

When declaring a variable of type va_list, it's not necessary to use the * operator, because va_list is already a pointer type.

Before using va_arg, you need to declare a va_list object and initialize it using va_start

*/

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    // declare an object 'ap' (argument pointer)
    // data type that represents the variable argument list
    va_list ap;

    // va_start: initializes ap to the beginning of the variable argument list
    va_start(ap, format);

    // keep track of the number of characters printed
    int count = 0;

    // the 'format' pointer is used to iterate through the string
    while (*format)
    {
        // if the character is a format specifier
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += ft_putchar(va_arg(ap, int));
            else if (*format == 's')
                count += ft_putstr(va_arg(ap, char *));
            else if (*format == 'd')
                count += ft_putnbr(va_arg(ap, int));
           /*  else if (*format == 'x')
                count += ft_puthex(va_arg(ap, unsigned int));
            else if (*format == 'X')
                count += ft_putHex(va_arg(ap, unsigned int));
            else if (*format == 'p')
                count += ft_putptr(va_arg(ap, void *)) */; 
            else if (*format == '%')
                count += ft_putchar('%');
        }
        else
            count += ft_putchar(*format);
        format++;
    }
}