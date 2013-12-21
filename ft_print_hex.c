/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 01:10:15 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 04:14:52 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


static void	ft_hex_reverse(char *str)
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

char		get_hex_char(unsigned int tmp)
{
	tmp = tmp % 16;
	if (tmp < 10)
		return (tmp + '0');
	return (tmp - 10 + 'a');
}
static char	*ft_hex_itoa(int n)
{
	int 			it;
	unsigned int 	tmp;
	char			*res_str;

	res_str = (char *)malloc(sizeof(char) * 12);
	it = -1;
	tmp = (unsigned int)n;
	while (++it < 12 && tmp)
	{
		res_str[it] = get_hex_char(tmp);
		tmp = tmp / 16;
	}
	res_str[it] = '\0';
	ft_hex_reverse(res_str);
	return (res_str);
}

int  		ft_print_hex(va_list *ap)
{
	int		i;
	int		res;
	char	*to_print;

	res = 0;
	i = va_arg(*ap, int);
	to_print = ft_hex_itoa(i);
	res = ft_strlen(to_print);
	write(1, to_print, res);
	free(to_print);
	return (res);
}
