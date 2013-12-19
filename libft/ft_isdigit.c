/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:35:03 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/11/23 11:36:59 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (TRUE);
	return (FALSE);
}
