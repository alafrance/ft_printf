/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:28 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 11:41:39 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(va_list ap, t_flags flags)
{
	int nb;
	int count;

	(void)flags;
	count = 0;
	nb = va_arg(ap, int);
	ft_putnbr(nb);
	return (count);
}
