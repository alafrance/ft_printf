/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:58 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/13 02:30:10 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list ap, t_flags flags)
{
	char	c;
	int		count;

	c = va_arg(ap, int);
	count = 0;
	if (flags.space_reverse)
	{
		count += ft_putchar_1(c);
		count += ft_display_space(flags.lmc - 1);
	}
	else
	{
		count += ft_display_space(flags.lmc - 1);
		count += ft_putchar_1(c);
	}
	return (count);
}