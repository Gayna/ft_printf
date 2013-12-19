/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:25:18 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/25 17:31:58 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*offset;
	char	converted_c;

	offset = NULL;
	converted_c = (char) c;
	tmp = (char *) s;
	while (*tmp)
	{
		if (*tmp == converted_c)
			offset = tmp;
		tmp++;
	}
	if (converted_c == 0 && *tmp == '\0')
		return (tmp);
	return (offset);
}
