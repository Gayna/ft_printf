/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 18:39:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/05 19:39:51 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char 		*ft_strjoin(const char *s1, const char *s2)
{
	size_t 	i;
	size_t 	len_s1;
	size_t 	len_s2;
	char 	*new_str;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *) malloc(sizeof(char) * (len_s2 + len_s1 + 1));
	while (i < len_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		new_str[i] = s2[i - len_s1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
