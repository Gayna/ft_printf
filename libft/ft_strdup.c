/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:21:37 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/19 01:44:20 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	length;

	length = ft_strlen(s1);
	new_str = (char *) malloc(sizeof(char) * (length + 1));
	if (new_str != NULL)
		new_str = ft_strcpy(new_str, s1);
	return (new_str);
}
