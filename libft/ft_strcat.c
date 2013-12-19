/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:11:34 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/25 16:26:08 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	char	*tmp;
	char	*tmp_2;

	tmp = s1;
	tmp_2 = (char *) s2;
	while (*tmp)
		tmp++;
	while (*tmp_2)
	{
		tmp = tmp_2;
		tmp++;
		tmp_2++;
	}
	return (s1);
}
