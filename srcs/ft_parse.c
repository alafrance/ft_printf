/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 19:28:45 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/15 11:01:38 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*parse(const char *format, t_flags *flags, va_list ap)
{
	while (*format == '-')
	{
		flags->space_reverse = 1;
		format++;
	}
	if (*format == '0')
	{
		flags->display_zero = 1;
		format++;
	}
	format = parse_flags_lmc(format, flags, ap);
	format = parse_flags_precision(format, flags, ap);
	return (format);
}

const char	*parse_flags_lmc(const char *format, t_flags *flags, va_list ap)
{
	while (*format == '-')
	{
		flags->space_reverse = 1;
		format++;
	}
	if (*format == '*')
	{
		flags->lmc = va_arg(ap, int);
		if (flags->lmc < 0)
		{
			flags->lmc = -flags->lmc;
			flags->space_reverse = 1;
		}
		format++;
	}
	else
		while (*format >= '0' && *format <= '9')
		{
			flags->lmc = flags->lmc * 10 + *format - '0';
			format++;
		}
	return (format);
}

const char	*parse_flags_precision(const char *format, t_flags *flags
			, va_list ap)
{
	if (*format == '.')
	{
		format++;
		if (*format == '*')
		{
			flags->nb_precision = va_arg(ap, int);
			format++;
		}
		else
		{
			flags->nb_precision = 0;
			while (*format >= '0' && *format <= '9')
			{
				flags->nb_precision = flags->nb_precision * 10 + *format - '0';
				format++;
			}
		}
	}
	return (format);
}
