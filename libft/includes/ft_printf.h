/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:22:41 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 17:22:43 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

typedef struct	s_lst
{
	char				*str;
	int					size;
	struct s_lst	*next;
}				t_lst;

typedef struct	s_p
{
	t_lst		*first;
	va_list		arg;
}				t_p;

int				new_node(char *data, int size, t_lst **list);
void			printargs(int arg1, ...);
int				ft_printf(const char * restrict format, ...);
int				parser(const char * restrict format, t_lst **list, t_p *p);

#endif