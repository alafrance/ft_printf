/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:19:43 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:19:46 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_print_hexa(va_list ap)
{
    int nb;

    nb = va_arg(ap, int);

    if (nb > 0)
        ft_putstr(ft_convert_base(ft_itoa(nb), "0123456789", "0123456789abcdef"));
    else
        ft_putstr("is neg lol");
}
