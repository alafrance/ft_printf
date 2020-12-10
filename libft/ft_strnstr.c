/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:57:16 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/15 15:19:36 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	if (to_find[j] == '\0')
		return ((char*)str);
	while (str[i] && i < len)
	{
		while (str[i + j] && to_find[j]
			&& to_find[j] == str[i + j] && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char*)str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
