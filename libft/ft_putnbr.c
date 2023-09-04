/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:39:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/09/04 17:45:05 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	char		number[4096];
	long int	num;
	int			i;
	int			count;

	num = n;
	i = 0;
	count = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		count++;
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num *= -1;
	}
	while (num > 0)
	{
		number[i] = (num % 10) + '0';
		i++;
		num = num / 10;
	}
	while (--i >= 0)
	{
		write(1, &number[i], 1);
		count++;
	}
	return (count);
}
