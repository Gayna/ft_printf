/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:23:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/25 17:24:42 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*tmp;
	char	converted_c;

	converted_c = (char) c;
	tmp = (char *) s;
	while (*tmp != converted_c || *tmp)
		tmp++;
	if (*tmp == converted_c)
		return (tmp);
	return (NULL);
}
