/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 15:39:56 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/23 16:48:46 by nvan-hou         ###   ########.fr       */
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

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp;

	if (s2 == NULL)
	{
		tmp = (char *) s1;
		return (tmp);
	}
	while (*s2 != *s1 && *s2)
		s2++;
	while (*s2)
	{
		if (minimatch(s1, s2))
		{
			tmp = (char *) s2;
			return (tmp);
		}
		while (*s2 != *s1 && *s2)
			s2++;
	}
	return (NULL);
}
