/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:18:14 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/16 11:59:23 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_space_unsigned(int nb, int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (flags.lmc > size_nb)
	{
		if (flags.nb_precision > size_nb
			|| (flags.nb_precision == 0 && nb == 0))
			count += ft_display_space(flags.lmc - flags.nb_precision);
		else
			count += ft_display_space(flags.lmc - size_nb);
	}
	return (count);
}

int	ft_display_zero_unsigned(int size_nb, t_flags flags)
{
	int count;

	count = 0;
	if (flags.nb_precision > size_nb)
		count += ft_display_zero(flags.nb_precision - size_nb);
	else if (flags.lmc > size_nb)
		count += ft_display_zero(flags.lmc - size_nb);
	return (count);
}

int	ft_display_nb_unsigned(long nb, int size_nb, t_flags flags
	, int (f)(unsigned long long))
{
	int	count;

	count = 0;
	if (flags.display_zero || flags.nb_precision > size_nb)
		count += ft_display_zero_unsigned(size_nb, flags);
	if (!(flags.nb_precision == 0 && nb == 0))
		count += f(nb);
	return (count);
}

int	ft_print_unsigned(va_list ap, t_flags flags
	, int (f)(unsigned long long), int base)
{
	unsigned int	nb;
	int				size_nb;
	int				count;

	count = 0;
	nb = va_arg(ap, int);
	size_nb = ft_size_nb(nb, base);
	if (flags.nb_precision == 0 && nb == 0)
		return (ft_zero_exception(flags));
	if (flags.nb_precision >= 0 || flags.space_reverse)
		flags.display_zero = 0;
	if (!flags.space_reverse && !flags.display_zero && flags.lmc > 0)
		count += ft_display_space_unsigned(nb, size_nb, flags);
	count += ft_display_nb_unsigned(nb, size_nb, flags, f);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space_unsigned(nb, size_nb, flags);
	return (count);
}
