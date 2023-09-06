
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

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putptr(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putnbr(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_puthex(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_puthex_upper(va_arg(ap, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, ap);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
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
