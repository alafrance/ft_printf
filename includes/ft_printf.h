/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:29:22 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 17:22:27 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../libft/libft.h"
int		ft_printf(const char *format, ...);
void	ft_print_address(va_list ap);
void	ft_print_char(va_list ap);
void	ft_print_decimal(va_list ap);
void	ft_print_udecimal(va_list ap);
void	ft_print_hexa(va_list ap);
void	ft_print_hexa_maj(va_list ap);
void	ft_print_string(va_list ap);
void ft_print_arg(const char *format, va_list ap);