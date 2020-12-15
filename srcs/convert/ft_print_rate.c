/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:14 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/15 13:52:17 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_rate(t_flags flags)
{
	int		count;

	count = 0;
	if (flags.space_reverse)
	{
		count += ft_putchar_1('%');
		count += ft_display_space(flags.lmc - 1);
	}
	else
	{
		count += ft_display_space(flags.lmc - 1);
		count += ft_putchar_1('%');
	}
	return (count);
}
