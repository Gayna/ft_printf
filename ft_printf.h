/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 02:31:01 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/18 03:35:53 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdargs.h>

# define BUFF_SIZE 1024

typedef void	(*t_fptr)(void *);
typedef struct	s_print_func
{
		char 	type;
		funcptr	func;
}				t_print_func;


int 	ft_printf(const char *format, ...);
void	ft_flush(char *buff);
void	ft_print_int(void *int_to_print);
void	ft_print_str(void *str_to_print);
void	ft_print_char(void *c_to_print);

/* to include in libft */
void	ft_putuchar(unsigned char c);
void	ft_putunbr(unsigned int n);
/* EOI */

#endif /* !FT_PRINTF_H */
