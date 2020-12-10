/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 09:59:45 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 10:11:03 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_base_10_to_some_base(int nb, char *base_to, char *str)
{
	int		size_base;
	int		i;
	int		neg;

	neg = 1;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		neg = -1;
	}
	size_base = ft_strlen(base_to);
	str[i++] = base_to[nb % size_base];
	while (nb >= size_base)
	{
		nb /= size_base;
		str[i++] = base_to[nb % size_base];
	}
	if (neg == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*str;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	if (!(str = malloc(sizeof(char) * ft_strlen_base(nb, ft_strlen(base_to)))))
		return (NULL);
	return (convert_base_10_to_some_base(nb, base_to, str));
}
