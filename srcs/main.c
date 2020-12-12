/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:30:09 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 18:22:32 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>
int main()
{
    char *str;

    ft_printf("%10.*s\n",-1, NULL);
    printf("%10.*s\n", -1, NULL);
    return (0);
}

