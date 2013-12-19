/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delim_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 02:40:25 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/19 08:09:27 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_delim_print(va_list *ap, char **buff, t_print_func *func)
{
	int 			it;

	it = 0;
	(*buff)++;
	if (**buff == '%')
	{
		ft_putchar('%');
		(*buff)++;
		return (1);
	}
	while (it < NBR_FUNC)
	{
		if (**buff == func[it].type)
		{
			(*buff)++;
			return (func[it].func(ap));
		}
		(*buff)++;
	}
	return (0);
}
