/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:14:58 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/25 15:51:27 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = s1;
	while (*tmp)
		tmp++;
	while (i < n)
	{
		tmp[i] = s2[i];
		i++;
	}
	return (s1);
}
