/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:28:19 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 18:07:14 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
const char *parse_flags_lmc(const char *format, t_flags *flags)
{
	int i;

	i = 0;
	if (*format == '0')
	{
		flags->display_zero = 1;
		format++;
	}
	while(*format == '-')
	{
		flags->space_reverse = 1;
		format++;
	}
	while (format[i] >= '0' && format[i] <= '9')
	{
		flags->lmc = flags->lmc * 10 + format[i] - '0';
		i++;
	}
	return (format + i);
}

const char *parse_flags_precision(const char *format, t_flags *flags)
{
	int i;

	i = 0;
	if (format[i] == '.')
	{
		i++;
		flags->nb_precision = 0;
		while(format[i] >= '0' && format[i] <= '9')
		{
			flags->nb_precision = flags->nb_precision * 10 + format[i] - '0';
			i++;
		}
	}
	return (format + i);
}

void	ft_print_arg(const char *format, va_list ap)
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
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_flags flags;

	va_start(ap, format);
	while (*format)
	{
		flags.display_zero = 0;
		flags.space_reverse = 0;
		flags.lmc = 0;
		flags.nb_precision = -1;
		if (*format == '%')
		{
			format++;
			format = parse_flags_lmc(format, &flags);
			format = parse_flags_precision(format, &flags);
			printf("display_zero: %d\n", flags.display_zero);
			printf("space_reverse: %d\n", flags.space_reverse);
			printf("lmc: %d\n", flags.lmc);
			printf("nb_precision: %d\n", flags.nb_precision);
			ft_print_arg(format, ap);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(ap);
	
	return (1);
}
