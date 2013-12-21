/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-hou <nvan-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 02:31:01 by nvan-hou          #+#    #+#             */
/*   Updated: 2013/12/21 03:32:19 by nvan-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"


# define BUFF_SIZE 4096
# define NBR_FUNC 8


typedef int		(*t_fptr)(va_list *a);
typedef struct	s_print_func
{
		char 	type;
		t_fptr	func;
}				t_print_func;
typedef union			u_pptr
{
		unsigned int 	val;
		char 			*offset;
}						t_pptr;

/* main func */
int 	ft_printf(const char *format, ...);
void	ft_flush(char *buff, int size);
int		ft_delim_print(va_list *ap, char **buff, t_print_func *func);
int		ft_simple_print(char **buff);
void	ft_init_func(t_print_func *tab);
int  	ft_print_uint(va_list *ap);
char 	get_hex_char(unsigned int tmp);

/* printing func */
int		ft_print_int(va_list *ap);
int		ft_print_str(va_list *ap);
int		ft_print_char(va_list *ap);
int  	ft_print_octal(va_list *ap);
int  	ft_print_hex(va_list *ap);
int		ft_print_ptr(va_list *ap);

#endif /* !FT_PRINTF_H */
