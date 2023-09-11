#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	char	*ptr;
	int		num;

	ptr = "Hello world";
	num = 22;
	int count = printf(" %x ", LONG_MAX);
	printf("\n%d\n", count);
	count = ft_printf(" %x ", LONG_MAX);
	printf("\n%d\n", count);
	count = printf(" %x ", LONG_MIN);
	printf("\n%d\n", count);
	count = ft_printf(" %x ", LONG_MIN);
	printf("\n%d\n", count);
	// ft_printf("\nTests made with the original function:\n");
	// printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	// ft_printf("\nTests made with my function:\n");
	// ft_printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	return (0);
}
