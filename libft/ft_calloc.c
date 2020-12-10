/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:14:06 by alafranc          #+#    #+#             */
/*   Updated: 2020/11/15 15:14:08 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *mem;

	if (count < 0 || size < 0)
		return (NULL);
	if (!(mem = malloc(size * count)))
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
