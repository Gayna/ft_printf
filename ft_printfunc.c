/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 03:30:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/19 08:32:40 by nvan-hou         ###   ########.fr       */
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
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int		ft_print_char(va_list *ap)
{
	char	*c;

	c = va_arg(*ap, char *);
	write(1, c, 1);
	return (1);
}
