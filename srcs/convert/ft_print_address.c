/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:53 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 15:32:21 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(va_list ap, t_flags flags)
{
	long long	addr;
	int			count;

	(void)flags;
	addr = (long long)va_arg(ap, char*);
	ft_putstr("0x");
	count = ft_putnbr_hexa_long_count(addr);
	return (count);
}
