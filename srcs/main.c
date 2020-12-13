/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:30:09 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/13 02:31:33 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>
int main()
{
    ft_printf("me : %c\n", 'c');
    dprintf(1, "real: %c\n", 'c');
    
    return (0);
}

