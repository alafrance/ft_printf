/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:13:22 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/10 10:16:23 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	tmp;

	size = ft_strlen(str);
	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
		i++;
	}
	return (str);
}
