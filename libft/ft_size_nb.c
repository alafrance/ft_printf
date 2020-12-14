/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:16:03 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 11:25:39 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size_nb(unsigned long long nb, int base)
{
	int count;

	count = 1;
	while (nb >= (unsigned long long)base)
	{
		nb /= base;
		count++;
	}
	return (count);
}
