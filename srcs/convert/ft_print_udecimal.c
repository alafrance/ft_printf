/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:22 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:20:31 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_udecimal(va_list ap)
{
    int nb;

    nb = va_arg(ap, int);

    if (nb > 0)
        ft_putnbr(nb);
    else
        ft_putstr("oula neg");
}
