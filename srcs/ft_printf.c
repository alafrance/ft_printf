/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:28:19 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/13 02:23:06 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
int			ft_print_arg(const char *format, va_list ap, t_flags flags)
{
	if (*format == 's')
		return (ft_print_string(ap, flags));
	else if (*format == 'c')
		return (ft_print_char(ap, flags));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_decimal(ap, flags));
	else if (*format == 'u')
		return (ft_print_udecimal(ap, flags));
	else if (*format == 'x')
		return (ft_print_hexa(ap, flags));
	else if (*format == 'X')
		return (ft_print_hexa_maj(ap, flags));
	else if (*format == 'p')
		return (ft_print_address(ap, flags));
	ft_putchar('%');
	return (1);
}

void		ft_init_flags(t_flags *flags)
{
		flags->display_zero = 0;
		flags->space_reverse = 0;
		flags->lmc = 0;
		flags->nb_precision = -1;
}

int			ft_printf(const char *format, ...)
{
	va_list ap;
	t_flags flags;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		ft_init_flags(&flags);
		if (*format == '%')
		{
			format = parse(++format, &flags, ap);
			count += ft_print_arg(format, ap, flags);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
