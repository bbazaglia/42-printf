/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:33:51 by bbazagli          #+#    #+#             */
/*   Updated: 2023/09/12 10:30:32 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct flags
{
	int	hash_flag;
	int	plus_flag;
	int	space_flag;
}		t_flags;

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putptr(size_t ptr);
int		ft_unsigned_putnbr(unsigned int n);
int		ft_puthex(size_t num, char type);
int		print_format(char specifier, va_list ap, const t_flags *flags);
int		ft_printf(const char *format, ...);
void	find_flags(const char **format, t_flags *flags);

#endif
