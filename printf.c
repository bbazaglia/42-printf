
/* Notes:

When declaring a variable of type va_list, it's not necessary to use the * operator, because va_list is already a pointer type.

Before using va_arg, you need to declare a va_list object and initialize it using va_start.

The functions used in this code were adapted to return an int, as return value of printf typically represents the number of characters printed.
*/

#include "ft_printf.h"

int	ft_putchar(int c)
{
	char	ch;

	ch = (char)c;
	return(write(1, &ch, 1));
}

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
            // print a single character
            if (*format == 'c')
                count += ft_putchar(va_arg(ap, int));

            // print a string
            else if (*format == 's')
                count += ft_putstr(va_arg(ap, char *));
            
            // print a pointer in hexadecimal format
            else if (*format == 'p')
                count += ft_putptr(va_arg(ap, void *)); 

            // print a decimal number or an integer in base 10
            else if (*format == 'd' || *format == 'i') 
                count += ft_putnbr(va_arg(ap, int));
            
            // print an unsigned decimal number
            else if (*format == 'u')
                count += ft_putnbr(va_arg(ap, unsigned int));

            // print a number in hexadecimal format
            else if (*format == 'x')
                count += ft_puthex(va_arg(ap, unsigned int));

            // print a number in hexadecimal format (uppercase)
            else if (*format == 'X')
                count += ft_putHex(va_arg(ap, unsigned int));

            // print a percent sign
            else if (*format == '%')
                count += ft_putchar('%');
        }
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(ap);
    return count; // Return the total number of characters printed
}

int main(void)
{
    char *ptr = "Hello world";
    int num = 22;
    ft_printf("\nTests made with the original function:\n");
    printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
    ft_printf("\nTests made with my function:\n");
    ft_printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
    return (0);
}