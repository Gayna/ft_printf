/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:42:34 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/05 19:48:05 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	char 	*tmp;

	i = 0;
	tmp = (char *) s2;
	while (i < n)
	{
		if (*tmp)
		{
			s1[i] = *tmp;
			tmp++;
		}
		else
			s1[i] = '\0';
		i++;
	}
	return (s1);
}
