/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 01:14:08 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 04:26:56 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
# include <string.h>
#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char	*str = "great success";
	int res = 0;
	res = ft_printf ("%p\n", str);
	printf("res: %d\n", res);
	res = ft_printf("%p\n", NULL);
	printf("res: %d\n", res);
	res = printf ("%p\n", str);
	printf("res: %d\n", res);
	res = printf ("%p\n", NULL);
	printf("res: %d\n", res);
	return (0);
}
