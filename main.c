// #include "ft_printf.h"
#include "ft_printf_bonus.h"

int	main(void)
{
	char	*ptr;
	int		num;

	ptr = "Hello world";
	num = 22;

	ft_printf("Mandatory part:\n");
	ft_printf("\nTests made with the original function:\n");
	printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	ft_printf("\nTests made with my function:\n");
	ft_printf("Single character: %c\nString: %s\nAddress: %p\nHexadecimal number in lowercase: %x\nHexadecimal number in uppercase: %X\nUnsigned number: %u\nDecimal number: %d\nInteger: %i\n", 'c', "Hello world", ptr, 753, 255, num, 0, -10);
	
	ft_printf("\nBonus part:\n");
	ft_printf("\nTests made with the original function:\n");
	printf("Hexadecimal number with hash flag:\n");
	printf("|%#x|\n", 22);
	printf("|%#X|\n", -1);
	printf("|%#X|\n", 16);
	printf("Decimal number with space flag:\n");
	printf("|% d|\n", 0);
	printf("|% i|\n", -1);
	printf("|% d|\n", 22);
	printf("Decimal number with plus flag:\n");
	printf("|%+d|\n", 0);
	printf("|%+d|\n", -1);
	printf("|%+i|\n", 22);
	ft_printf("Tests made with my function\n");
	printf("Hexadecimal number with hash flag:\n");
	ft_printf("|%#x|\n", 22);
	ft_printf("|%#X|\n", -1);
	ft_printf("|%#X|\n", 16);
	printf("Decimal number with space flag:\n");
	ft_printf("|% d|\n", 0);
	ft_printf("|% i|\n", -1);
	ft_printf("|% d|\n", 22);
	printf("Decimal number with plus flag:\n");
	ft_printf("|%+d|\n", 0);
	ft_printf("|%+d|\n", -1);
	ft_printf("|%+i|\n", 22);


	return (0);
}
