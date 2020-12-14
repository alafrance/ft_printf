/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:14:01 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 12:13:18 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_space(int nb_space)
{
	int i;

	i = -1;
	while (++i < nb_space)
		ft_putchar(' ');
	return (i);
}

int ft_display_zero(int nb_zero)
{
	int i;

	i = -1;
	while(++i < nb_zero)
		ft_putchar('0');
	return (i);
}