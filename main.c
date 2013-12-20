/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 01:14:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 00:42:24 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
# include <string.h>
#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	*str = "great succes";
	int		i = -1;
	int		res = 0;

	res = ft_printf("pouet: %o%% -> %s %c", i, str, '\n');
	printf("res: %i\n", res);
	res = printf("pouet: %o%% -> %s %c", i, str, '\n');
	printf("res: %i\n", res);
	return (0);
}
