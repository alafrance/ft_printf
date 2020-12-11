/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:29:22 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/11 17:00:58 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"
typedef int bool;
typedef struct  s_flags {
	bool	display_zero;
	bool	space_reverse;
	int		lmc;
	int		nb_precision;
}               t_flags;
int				ft_printf(const char *format, ...);
void			ft_print_address(va_list ap);
void			ft_print_char(va_list ap);
void			ft_print_decimal(va_list ap);
void			ft_print_udecimal(va_list ap);
void			ft_print_hexa(va_list ap);
void			ft_print_hexa_maj(va_list ap);
void			ft_print_string(va_list ap);
void			ft_print_arg(const char *format, va_list ap);
int				ft_putchar_1(char c);
int				ft_putnbr_hexa_long_count(long long nb);
int				ft_putnbr_hexa_count(int nb);
int				ft_putstr_count(char *str);
int				ft_putnbr_count(int nb);
const char		*parse_flags(const char *format, t_flags *flags);
#endif
