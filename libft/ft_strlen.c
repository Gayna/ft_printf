/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:20:09 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/05 19:45:46 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlen(const char *s)
{
	char *tmp;

	if (s == NULL)
		return (0);
	tmp = (char *) s;
	while (*tmp)
		tmp++;
	return (tmp - s);
}
