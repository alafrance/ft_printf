/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:17:52 by alafranc          #+#    #+#             */
/*   Updated: 2020/11/23 13:44:55 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	i = 0;
	us1 = (unsigned char*)s1;
	us2 = (unsigned char*)s2;
	while (i != n - 1 && us1[i] == us2[i])
		i++;
	return (us1[i] - us2[i]);
}
