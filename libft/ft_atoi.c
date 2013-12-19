/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:49:46 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/23 12:12:06 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int		ft_pow10(int pow)
{
	int			tmp;
	int			res;

	res = 1;
	tmp = 0;
	while (tmp < pow)
	{
		res *= 10;
		tmp++;
	}
	return (res);
}

int				ft_atoi(const char *str)
{
	const char	*tmp;
	int			res;
	int			pow;
	char		flag;

	res = 0;
	tmp = str;
	flag = 'p';
	while (*tmp == ' ' || *tmp == '\t')
		tmp++;
	if (*tmp == '-')
	{
		tmp++;
		flag = 'n';
	}
	pow = ft_pow10(ft_strlen(str));
	while (pow > 1)
	{
		res += (*tmp - '0') * pow;
		pow = pow / 10;
		tmp++;
	}
	if (flag == 'n')
		return (-res);
	return (res);
}
