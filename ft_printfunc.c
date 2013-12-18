/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 03:30:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 03:31:08 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_int(void *int_to_print)
{
	int	to_print;

	to_print = (int)int_to_print;
	ft_putnbr(to_print);
	return ;
}

void	ft_print_str(void *str_to_print)
{
	char	*to_print;

	to_print = (char *)str_to_print;
	ft_putstr(to_print);
	return ;
}

void	ft_print_char(void *c_to_print)
{
	char	to_print;

	to_print = (char)c_to_print;
	ft_putchar(to_print);
	return ;
}
