/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:16:54 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 10:16:11 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_n(int nb)
{
	int count;

	count = 1;
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static int	ft_initialize_itoa(long *nb, int *sign, char **buf, int n)
{
	*nb = n;
	*sign = 1;
	if (*nb < 0)
	{
		*nb = -(*nb);
		if (!(*buf = malloc(sizeof(char) * (size_n(*nb) + 2))))
			return (0);
		*sign = -1;
	}
	else
	{
		if (!(*buf = malloc(sizeof(char) * (size_n(*nb) + 1))))
			return (0);
	}
	return (1);
}

char		*ft_itoa(int n)
{
	long	nb;
	int		sign;
	char	*buf;
	int		i;

	i = 0;
	if (!ft_initialize_itoa(&nb, &sign, &buf, n))
		return (NULL);
	while (nb >= 10)
	{
		buf[i++] = nb % 10 + '0';
		nb /= 10;
	}
	buf[i++] = nb % 10 + '0';
	if (sign == -1)
		buf[i++] = '-';
	buf[i] = '\0';
	return (ft_strrev(buf));
}
