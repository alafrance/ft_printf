/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:28 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/13 19:29:49 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_size_nb(long nb)
{
	int count;

	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while(nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int ft_display_zero(int nb_zero)
{
	int i;

	i = -1;
	while(++i < nb_zero)
		ft_putchar('0');
	return (i);
}
int	ft_putnbr_with_precision(long nb, int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar_1('-');
		nb = -nb;
		count++;
	}
	if (flags.nb_precision > size_nb)
		count += ft_display_zero(flags.nb_precision - size_nb);
	if (flags.nb_precision != 0)
		count += ft_putnbr_count(nb);
	return (count);
}

int	ft_display_space_decimal(int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (flags.nb_precision > 0)
			count += ft_display_space(flags.lmc - size_nb
			- flags.nb_precision + 1);
	else if (flags.nb_precision == 0)
		count += ft_display_space(flags.lmc - size_nb + 1);
	else
		count += ft_display_space(flags.lmc - size_nb);
	return (count);
}

int	ft_print_decimal(va_list ap, t_flags flags)
{
	long nb;
	int count;
	int size_nb;

	count = 0;
	nb = va_arg(ap, int);
	size_nb = ft_size_nb(nb);
	if (flags.display_zero)
	{
		if (nb < 0)
		{
			count += ft_putchar_1('-');
			nb = -nb;
		}
		if (flags.lmc > size_nb)
			count += ft_display_zero(flags.lmc - size_nb);
	}
	else if (!flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space_decimal(size_nb, flags);
	count += ft_putnbr_with_precision(nb, size_nb, flags);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space_decimal(size_nb, flags);
	return (count);
}
