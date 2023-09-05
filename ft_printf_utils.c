#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        ft_putchar(str[i++]);
    return (i);
}

int	ft_putnbr(int n)
{
	size_t	num;
    int count;

	num = (size_t)n;
    count = 0;
	if (num < 0)
	{
		num *= -1;
		count += ft_putchar('-');
	}
	if (num < 10)
		count += ft_putchar(num + '0');
	else
	{
		count += ft_putnbr(num / 10);
		count += ft_putnbr(num % 10);
	}
    return (count);
}

int ft_putptr(void *ptr)
{
    int count;

    count = 0;
    count += ft_putstr("0x");
    count += ft_puthex((size_t)ptr);
    return (count);
}

int ft_puthex(unsigned int num)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789abcdef";
    if (num < 16)
        count += ft_putchar(hex[num]);
    else
    {
        count += ft_puthex(num / 16);
        count += ft_puthex(num % 16);
    }
    return (count);
}

int ft_putHex(unsigned int num)
{
    int count;
    char *hex;

    count = 0;
    hex = "0123456789ABCDEF";
    if (num < 16)
        count += ft_putchar(hex[num]);
    else
    {
        count += ft_putHex(num / 16);
        count += ft_putHex(num % 16);
    }
    return (count);
}
