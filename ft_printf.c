/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 02:22:34 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 03:35:54 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


int ft_printf(const char *format, ...)
{

	/*
	**	read format
	**		-> extract %
	**	print str (bufferized)
	**	print %
	*/
}

void	ft_flush(void *buff)
{
	char	*tmp;

	tmp = (char *)buff;
	ft_putchar(buff);
	buff = ft_strncpy(buff, buff + BUFF_SIZE, BUFF_SIZE);
	return ;
}
