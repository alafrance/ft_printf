/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:30:09 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 22:51:00 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include <stdio.h>
int main()
{
    int nb;
    int count;

    char *str;

    str = "coucou";
    nb = 123;
    printf("|%10.12x|\n", 234);
    ft_printf("|%10.12x|\n", 234);
   /*
    printf("|%-0*.10d| |%-0*.0d|\n", 21, 1021, 21, -1011);
    ft_printf("|%-0*.10d| |%-0*.0d|\n", 21, 1021, 21, -1011);
    */
    /*
    ft_printf("|%-2.3d|\n",0);
    printf("|%-2.3d|\n",0);
*/
    return (0);
}

