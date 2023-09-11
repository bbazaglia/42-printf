#include "ft_printf.h"
#include "ft_printf_bonus.h"
#include <limits.h>

int	main(void)
{
	char	*ptr;
	int		num;

	ptr = "Hello world";
	num = 22;
	printf("|%#X|\n", -1);
	ft_printf("|%#X|\n", -1);
	printf("|%#X|\n", -100);
	ft_printf("|%#X|\n", -100);
	printf("|%#X|\n", 0);
	ft_printf("|%#X|\n", 0);
	// int count = printf(" %x ", LONG_MAX);
	// printf("\n%d\n", count);
	// count = ft_printf(" %x ", LONG_MAX);
	// printf("\n%d\n", count);
	// count = printf(" %x ", LONG_MIN);
	// printf("\n%d\n", count);
	// count = ft_printf(" %x ", LONG_MIN);
	// printf("\n%d\n", count);
	// ft_printf("Mandatory part:\n");
	// ft_printf("\nTests made with the original function:\n");
	// printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	// ft_printf("\nTests made with my function:\n");
	// ft_printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	
	// ft_printf("Bonus part:\n");
	// ft_printf(" %#d\n", 0);
	// ft_printf(" %#d\n", -1);
	// ft_printf(" %+d\n\n", 1);
	// printf(" %#d\n", 0);
	// printf(" %#d\n", -1);
	// printf(" %+d\n", 1);
	return (0);
}
