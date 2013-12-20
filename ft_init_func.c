/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 03:22:19 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 00:06:08 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_init_func(t_print_func *tab)
{
	tab[0].type = 'd';
	tab[0].func = &ft_print_int;
	tab[1].type = 'c';
	tab[1].func = &ft_print_char;
	tab[2].type = 's';
	tab[2].func = &ft_print_str;
	tab[3].type = 'i';
	tab[3].func = &ft_print_int;
	tab[4].type = 'o';
	tab[4].func = &ft_print_octal;
	return ;
}
