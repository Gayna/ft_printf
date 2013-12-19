/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:03:24 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/13 15:55:10 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	minimatch(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (TRUE);
	return (FALSE);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = NULL;
	i = 0;
	if (s2 == NULL)
	{
		 tmp = (char *) s1;
		return (tmp);
	}
	while (*s2 && i < n)
	{
		if (minimatch(s1, s2))
		{
			tmp = (char *) s2;
			return (tmp);
		}
		s2++;
		i++;
	}
	return (NULL);
}
