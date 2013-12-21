/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 01:31:23 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 01:31:35 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


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


static char	*ft_uint_itoa(int n)
{
	int 			it;
	unsigned int	tmp;
	char			*res_str;

	res_str = (char *)malloc(sizeof(char) * 10);
	it = -1;
	tmp = (unsigned int)n;
	while (++it < 10 && tmp)
	{
		res_str[it] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	res_str[it] = '\0';
	ft_reverse(res_str);
	return (res_str);
}

int  		ft_print_uint(va_list *ap)
{
	unsigned int	i;
	int				res;
	char			*to_print;

	res = 0;
	i = va_arg(*ap, unsigned int);
	to_print = ft_uint_itoa(i);
	ft_putstr(to_print);
	res = ft_strlen(to_print);
	free(to_print);
	return (res);
}
