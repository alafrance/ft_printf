/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:44:05 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/15 10:44:11 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_hexa_1(char c)
{
	if (c >= 0 && c <= 9)
		ft_putchar_1(c + '0');
	else
		ft_putchar_1(c + 'a' - 10);
	return (1);
}

int	ft_putnbr_hexa_count(unsigned long long nb)
{
	if (nb < 16)
		return (ft_putchar_hexa_1(nb % 16));
	return (ft_putnbr_hexa_count(nb / 16)
	+ ft_putchar_hexa_1(nb % 16));
}

int	ft_putchar_hexa_maj_1(char c)
{
	if (c >= 0 && c <= 9)
		ft_putchar_1(c + '0');
	else
		ft_putchar_1(c + 'A' - 10);
	return (1);
}

int	ft_putnbr_hexa_maj_count(unsigned long long nb)
{
	if (nb < 16)
		return (ft_putchar_hexa_maj_1(nb % 16));
	return (ft_putnbr_hexa_maj_count(nb / 16)
	+ ft_putchar_hexa_maj_1(nb % 16));
}
