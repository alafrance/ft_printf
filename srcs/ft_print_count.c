/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:19:46 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 14:59:57 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_1(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr_hexa_long_count(long long nb)
{
	if (nb < 16)
		return (ft_putchar_1(nb % 16));
	return (ft_putnbr_hexa_long_count(nb / 16)
	+ ft_putchar_1(nb % 16));
}

int	ft_putnbr_hexa_count(int nb)
{
	if (nb < 16)
		return (ft_putchar_1(nb % 16));
	return (ft_putnbr_hexa_count(nb / 16)
	+ ft_putchar_1(nb % 16));
}

int	ft_putnbr_count(int nb)
{
	if (nb < 10)
		return (ft_putchar_1(nb + '0'));
	return (ft_putnbr_count(nb / 10)
	+ ft_putchar_1(nb % 10 + '0'));
}

int	ft_putstr_count(char *str, int size)
{
	int		i;
	char	*null;

	null = "(null)";
	i = 0;
	if (!str)
		while (i < size && null[i])
			ft_putchar(null[i++]);
	else
		while (str[i] && i < size)
			ft_putchar(str[i++]);
	return (i);
}
