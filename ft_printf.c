/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 02:22:34 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 06:20:26 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
	char	*tmp;
	int		res;

	res = 0;
	tmp = (char *)format;
	while (*tmp != '\0')
	{
		if (*tmp != '%')
			res += ft_simple_print(&tmp);
		else
		{
			ft_machin(); //to code (and change the name)
		}
	}
	/*
	**	print str (bufferized)
	**	print %
	*/
}
