/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:00:19 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 10:11:22 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_base(int nb, int base_to)
{
	int count;

	if (nb < 0)
		count = 2;
	else
		count = 1;
	while (nb >= base_to)
	{
		nb /= base_to;
		count++;
	}
	return (count + 1);
}

int		is_base_valid(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			return (0);
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
		i++;
		j = i;
	}
	return (1);
}

int		is_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
