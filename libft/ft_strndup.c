/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:44:46 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/05 19:51:09 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char			*ft_strndup(const char *s1, size_t n)
{
	char		*new_str;
	size_t		len;

	len = ft_min(n, ft_strlen(s1));
	new_str = (char *) malloc(sizeof(char) * len + 1);
	new_str = ft_strncpy(new_str, s1, len + 1);
	return (new_str);
}
