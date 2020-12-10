/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:20:03 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:20:08 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_print_hexa_maj(va_list ap)
{
    int nb;

    nb = va_arg(ap, int);

    if (nb > 0)
        ft_putstr(ft_convert_base(ft_itoa(nb), "0123456789", "0123456789ABCDEF"));
    else
        ft_putstr("is neg lol");
}
