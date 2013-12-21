/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:08:53 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/20 22:31:45 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	void	*tmp;

	tmp = (void *)s1;
	tmp = (void *)s2;
	tmp++;
	tmp--;
	n++;
	return (0);
}
