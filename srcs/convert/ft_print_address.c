/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:53 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 11:30:47 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	size_nb_base(unsigned long long nb, int base)
{
	int count;

	count = 1;
	while (nb >= (unsigned long long)base)
	{
		nb /= (unsigned long long)base;
		count++;
	}
	return (count);
}

int	ft_print_address(va_list ap, t_flags flags)
{
	unsigned long long	addr;
	int			count;
	int			size_nb;

	count = 0;
	addr = (unsigned long long)va_arg(ap, char*);
	size_nb = ft_size_nb(addr, 16) + 2;

	if (!flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space(flags.lmc - size_nb);
	count += ft_putstr_count("0x", 2);
	count += ft_putnbr_hexa_count(addr);
	if (flags.space_reverse && flags.lmc > size_nb)
		count += ft_display_space(flags.lmc - size_nb);
	return (count);
}
