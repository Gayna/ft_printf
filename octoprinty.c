/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octoprinty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 23:44:00 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 01:03:44 by nvan-hou         ###   ########.fr       */
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


static char	*ft_octal_itoa(int n)
{
	int 	it;
//	int		flag;
	unsigned int tmp;
	char	*res_str;

	res_str = (char *)malloc(sizeof(char) * 12);
	it = -1;
//	flag = (n < 0)? NEG : POS;
	tmp = (unsigned int)n;
//	n = (n < 0)? 2147483648 - n : n;
	while (++it < 12 && tmp)
	{
		res_str[it] = tmp % 8 + '0';
		tmp = tmp / 8;
	}
	/* if (flag) */
	/* 	res_str[it++] = '-'; */
	res_str[it] = '\0';
	ft_reverse(res_str);
	return (res_str);
}

int  		ft_print_octal(va_list *ap)
{
	int		i;
	int		res;
	char	*to_print;

	res = 0;
	i = va_arg(*ap, int);
	to_print = ft_octal_itoa(i);
	ft_putstr(to_print);
	res = ft_strlen(to_print);
	free(to_print);
	return (res);
}
