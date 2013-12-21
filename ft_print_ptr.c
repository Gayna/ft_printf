/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 02:57:53 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 04:24:32 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_ptr_reverse(char *str)
{
	char	tmp;
	int		it;
	int 	len;

	len = ft_strlen(str);
	it = -1;
	while (++it < len/ 2)
	{
		tmp = str[it];
		str[it] = str[len - it - 1];
		str[len - it - 1] = tmp;
	}
	return ;
}

static char	*ft_ptr_itoa(int n)
{
	int 			it;
	unsigned int 	tmp;
	char			*res_str;

	res_str = (char *)malloc(sizeof(char) * 14);
	it = -1;
	res_str[0] = '0';
	res_str[1] = 'x';
	tmp = (unsigned int)n;
	while (++it < 12 && tmp)
	{
		res_str[it + 2] = get_hex_char(tmp);
		tmp = tmp / 16;
	}
	res_str[it + 2] = '\0';
	ft_ptr_reverse(res_str + 2);
	return (res_str);
}


int			ft_print_ptr(va_list *ap)
{
	t_pptr	tmp;
	char	*to_print;
	int 	res;

	tmp.offset = va_arg(*ap, char *);
	res = 0;
	if (tmp.val == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	to_print = ft_ptr_itoa(tmp.val);
	res = ft_strlen(to_print);
	write(1, to_print, res);
	free(to_print);
	return (res);
}
