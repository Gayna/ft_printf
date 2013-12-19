/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:58:44 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/13 15:42:05 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	void *tmp;

	tmp = (void *)s1;
	tmp = (void *)s2;
	c += 1;
	n += 1;
	return (tmp);
}
