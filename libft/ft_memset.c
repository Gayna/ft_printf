/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:51:26 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/25 17:35:44 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	value;
	unsigned char	*tmp;
	size_t			i;

	value = c;
	i = 0;
	tmp = (unsigned char *) b;
	while (i < len)
	{
		tmp[i] = value;
		i++;
	}
	return (b);
}
