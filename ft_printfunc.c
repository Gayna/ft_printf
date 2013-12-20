/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 03:30:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 00:04:26 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


int  	ft_print_int(va_list *ap)
{
	int		i;
	int		res;
	char	*to_print;

	res = 0;
	i = va_arg(*ap, int);
	to_print = ft_itoa(i);
	ft_putstr(to_print);
	res = ft_strlen(to_print);
	free(to_print);
	return (res);
}

int 	ft_print_str(va_list *ap)
{
	char	*str;
	int 	len;

	str = va_arg(*ap, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int		ft_print_char(va_list *ap)
{
	char	c;

	c = (char)va_arg(*ap, int);
	write(1, &c, 1);
	return (1);
}
