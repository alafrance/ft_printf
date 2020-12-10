/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:00:40 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 10:05:05 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_factorial(nb - 1));
}

int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_power(nb, --power));
}

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2 && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0
		|| nb % 7 == 0)
		return (0);
	while (i < nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
