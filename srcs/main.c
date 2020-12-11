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
    int a;
    int b;

    b = -45;
    a = 12;
    str = "coucou";

    printf("%s", NULL);
    //ft_printf("----ME-----\n");
    // ft_printf("%s, %c %d %x %X %x %X %u %u %i\n", str, str[0], a, a, a, b, b, a, b, a);
    //ft_printf("----REAL-----\n");
    //printf("%s, %c %d %x %X %x %X %u %u %i\n", str, str[0], a, a, a, b, b, a, b, a);
    return (0);
}