/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:26:49 by bbazagli          #+#    #+#             */
/*   Updated: 2023/09/06 14:16:37 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[count])
		ft_putchar(str[count++]);
	return (count);
}

int	ft_putnbr(int n)
{
	size_t	num;
	int		count;

	num = (size_t)n;
	count = 0;
	if (n < 0)
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

int	ft_putptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_putstr("nil"));
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex((size_t)ptr);
	return (count);
}

int	ft_puthex(size_t num)
{
	int		count;
	char	*hex;

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

int	ft_puthex_upper(size_t num)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (num < 16)
		count += ft_putchar(hex[num]);
	else
	{
		count += ft_puthex_upper(num / 16);
		count += ft_puthex_upper(num % 16);
	}
	return (count);
}
