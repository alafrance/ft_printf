/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:14 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/16 11:32:23 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_size(char *ptr, t_flags flags)
{
	int size;

	if (!ptr && flags.nb_precision < 0)
		size = ft_strlen("(null)");
	else if (ptr && (flags.nb_precision < 0
				|| flags.nb_precision > (int)ft_strlen(ptr)))
		size = ft_strlen(ptr);
	else
		size = flags.nb_precision;
	return (size);
}

int	ft_print_string(va_list ap, t_flags flags)
{
	char	*ptr;
	int		count;
	int		size;

	ptr = va_arg(ap, char *);
	if (ptr == NULL)
		ptr = "(null)";
	count = 0;
	size = ft_init_size(ptr, flags);
	if (flags.space_reverse)
		flags.display_zero = 0;
	if (!flags.space_reverse && !flags.display_zero && flags.lmc > size)
		count += ft_display_space(flags.lmc - size);
	if (flags.display_zero && flags.lmc > size)
		count += ft_display_zero(flags.lmc - size);
	count += ft_putstr_count(ptr, size);
	if (flags.space_reverse && !flags.display_zero && flags.lmc > size)
		count += ft_display_space(flags.lmc - size);
	return (count);
}

int	ft_print_char(va_list ap, t_flags flags)
{
	char	c;
	int		count;

	c = (char)va_arg(ap, int);
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
