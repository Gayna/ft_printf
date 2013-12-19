/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 16:54:52 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/13 16:56:32 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
	return ;
}