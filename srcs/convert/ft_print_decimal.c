/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:28 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 17:34:43 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_display_space_decimal(int neg, int nb, int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (neg)
		flags.lmc--;
	if (flags.lmc > size_nb)
	{
		if (flags.nb_precision > size_nb || (flags.nb_precision == 0 && nb == 0))
			count += ft_display_space(flags.lmc - flags.nb_precision);
		else
			count += ft_display_space(flags.lmc - size_nb);
	}
	return (count);
}

int	ft_display_zero_decimal(int neg, int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (flags.nb_precision > size_nb)
		count += ft_display_zero(flags.nb_precision - size_nb);
	else if (flags.lmc > size_nb)
	{
		if (neg)
			count += ft_display_zero(flags.lmc - size_nb - 1);
		else
			count += ft_display_zero(flags.lmc - size_nb);
	}
	return (count);
}

int	ft_print_decimal(va_list ap, t_flags flags)
{
	long nb;
	int size_nb;
	int count;
	int neg;

	neg = 0;
	count = 0;
	nb = va_arg(ap, int);
	size_nb = 0;
	if (nb < 0)
	{
		nb = -nb;
		neg = 1;
	}
	size_nb += ft_size_nb(nb, 10);
	if (flags.nb_precision >= 0 || flags.space_reverse)
		flags.display_zero = 0;
	if (!flags.space_reverse && !flags.display_zero && flags.lmc > 0)
		count += ft_display_space_decimal(neg, nb, size_nb, flags);
	if (neg)
		count += ft_putchar_1('-');
	if (flags.display_zero || flags.nb_precision > size_nb)
		count += ft_display_zero_decimal(neg, size_nb, flags);
	if (!(flags.nb_precision == 0 && nb == 0))
		count += ft_putnbr_count(nb);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space_decimal(neg, nb, size_nb, flags);
	return (count);
}
