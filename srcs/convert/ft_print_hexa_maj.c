/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:03 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 22:56:34 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int ft_display_nb_hexa_maj(long nb, int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (flags.display_zero || flags.nb_precision > size_nb)
		count += ft_display_zero_unsigned(size_nb, flags);
	if (!(flags.nb_precision == 0 && nb == 0))
		count += ft_putnbr_hexa_maj_count(nb);
	return (count);
}


int	ft_print_hexa_maj(va_list ap, t_flags flags)
{
	unsigned int nb;
	int size_nb;
	int count;

	count = 0;
	nb = va_arg(ap, int);
	size_nb = ft_size_nb(nb, 16);
	if (flags.nb_precision >= 0 || flags.space_reverse)
		flags.display_zero = 0;
	if (!flags.space_reverse && !flags.display_zero && flags.lmc > 0)
		count += ft_display_space_unsigned(nb, size_nb, flags);
	count += ft_display_nb_hexa_maj(nb, size_nb, flags);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space_unsigned(nb, size_nb, flags);
	return (count);
}
