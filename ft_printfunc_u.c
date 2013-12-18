/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 03:32:11 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 03:35:54 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printfunc_u.h"

void	ft_print_uchar(void *uc_to_print)
{
	unsigned char	to_print;

	to_print = (unsigned char)uc_to_print;
	ft_putuchar(to_print);
	return ;
}

void	ft_print_int(void *int_to_print)
{
	unsigned int	to_print;

	to_print = (unsigned int)int_to_print;
	ft_putnbr(to_print);
	return ;
}
