/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:43 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 15:34:18 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(va_list ap)
{
	int			nb;
	long long	max;
	int			count;

	max = 4294967296;
	nb = va_arg(ap, int);
	if (nb < 0)
		count = ft_putnbr_hexa_long_count(max + (long long)nb);
	else
		count = ft_putnbr_hexa_count(nb);
}
