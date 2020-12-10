/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:28:19 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:21:17 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_arg(const char *format, va_list ap)
{
	if (*format == 's')
		ft_print_string(ap);
	else if (*format == 'c')
		ft_print_char(ap);
	else if (*format == 'd' || *format == 'i')
		ft_print_decimal(ap);
	else if (*format == 'u')
		ft_print_udecimal(ap);
	else if (*format == 'x')
		ft_print_hexa(ap);
	else if (*format == 'X')
		ft_print_hexa_maj(ap);
	else if (*format == 'p')
		ft_print_address(ap);
	else
		ft_putstr_fd("error for now...", 1);
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);
	while(*format)
	{
		if (*format == '%')
		{
			format++;
			ft_print_arg(format, ap);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(ap);
	return (1);
}
