/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:58 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 11:41:35 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list ap, t_flags flags)
{
	char c;
	int count;
	(void)flags;

	count = 0;
	c = va_arg(ap, int);
	ft_putchar(c);
	return (count);
}
