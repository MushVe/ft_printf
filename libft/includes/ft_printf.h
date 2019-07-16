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

typedef struct	s_llist
{
	char				*str;
	int					size;
	struct s_llist	*next;
}				t_llist;

typedef struct	s_param
{
	
	t_llist		*first;

}				t_param;

int				new_node(char *data, int size, t_llist **list);
void			printargs(int arg1, ...);
int				ft_printf(const char * restrict format, ...);
int				parser(const char * restrict format, t_llist **list, t_param *p);

#endif