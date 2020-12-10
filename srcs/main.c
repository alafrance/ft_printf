/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:30:09 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:25:44 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main()
{
    ft_printf("----ME-----\n");
    ft_printf("%d\n", 42);
    ft_printf("%s\n", "coucou les amis c david lafarge pokemon");
    ft_printf("%c\n", 'c');
    ft_printf("%i\n", 42);
    ft_printf("%u\n", 12);
    ft_printf("%p\n", "salut");
    ft_printf("%x\n", 123);
    ft_printf("%X\n", 123);
    ft_printf("----REAL-----\n");
    printf("%d\n", 42);
    printf("%s\n", "coucou les amis c david lafarge pokemon");
    printf("%c\n", 'c');
    printf("%i\n", 42);
    printf("%u\n", 12);
    printf("%p\n", "salut");
    printf("%x\n", 123);
    printf("%X\n", 123);
}
