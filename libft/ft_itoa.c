/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 04:13:28 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/20 23:44:46 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
# include <stdio.h>

static void	ft_reverse(char *str)
{
	char	tmp;
	int		it;
	int 	len;

	len = ft_strlen(str);
	it = -1;
	while (++it < (len / 2))
	{
		tmp = str[it];
		str[it] = str[len - it - 1];
		str[len - it - 1] = tmp;
	}
	return ;
}


char		*ft_itoa(int n)
{
	int 	it;
	int		flag;
	char	*res_str;

	if (n == -2147483648)
	{
		res_str = ft_strdup("-2147483648");
		return (res_str);
	}
	res_str = (char *)malloc(sizeof(char) * 12);
	it = -1;
	flag = (n < 0)? NEG : POS;
	n = (n < 0)? -n : n;
	while (++it < 12 && n)
	{
		res_str[it] = n % 10 + '0';
		n = n / 10;
	}
	if (flag)
		res_str[it++] = '-';
	res_str[it] = '\0';
	ft_reverse(res_str);
	return (res_str);
}
