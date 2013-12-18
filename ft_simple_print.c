/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 06:08:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 06:08:10 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		ft_simple_print(char **buff)
{
	char	tmp_buff[BUFF_SIZE + 1];
	int 	offset;
	int		res;

	offset = 0;
	res = 0;
	ft_bzero(buff, BUFF_SIZE);
	while (**buff != '\0' && **buff != '%')
	{
		if (!(offset = offset % BUFF_SIZE))
		{
			ft_flush(tmp_buff, offset);
			res += BUFF_SIZE;
		}
		tmp_buff[offset] = **buff;
		offset++;
		*buff++;
	}
	res += offset;
	ft_flush(buff, offset);
	return (res);
}
