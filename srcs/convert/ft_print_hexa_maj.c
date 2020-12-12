/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:03 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 15:34:27 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_maj(va_list ap, t_flags flags)
{
	int			nb;
	long long	max;
	int			count;

	(void)flags;
	max = 4294967296;
	nb = va_arg(ap, int);
	if (nb < 0)
		count = ft_putnbr_hexa_long_count(max + (long long)nb);
	else
		count = ft_putnbr_hexa_count(nb);
	return (count);
}
