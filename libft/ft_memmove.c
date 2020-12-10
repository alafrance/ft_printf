/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:17:59 by alafranc          #+#    #+#             */
/*   Updated: 2020/11/15 15:18:00 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = len + 1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
		while (--i)
			dest[i - 1] = source[i - 1];
	return (dst);
}
