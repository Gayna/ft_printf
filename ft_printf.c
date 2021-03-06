/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 02:22:34 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/19 08:08:59 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
	char 			*tmp;
	int				res;
	va_list			ap;
	t_print_func	func[NBR_FUNC];

	tmp = (char *)format;
	ft_init_func(func);
	va_start(ap, format);
	res = 0;
	while ( *tmp != '\0')
	{
		if (*tmp != '%')
		{
			res += ft_simple_print(&tmp);
			continue ;
		}
		res += ft_delim_print(&ap, &tmp, func);
	}
	va_end(ap);
	return (res);
}
