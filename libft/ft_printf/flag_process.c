/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*add_width(char *res, t_p *p)
{
	int	i;

	i = -1 + ft_strlen(res);
//	ft_putendl("000");
	if (p->op_less == 1)
		while (++i < p->op_width)
			res = ft_strjoin(res, " ", 1);
	else if (p->op_zero == 1)
		while (++i < p->op_width)
			res = ft_strjoin("0", res, 2);
	else
		while (++i < p->op_width)
			res = ft_strjoin(" ", res, 2);
	
	return res;
}

int		process(char c, va_list ap, t_p *p)
{
	char *res;

	res = NULL;
	if (c == 'd' || c  == 'i' || c == 'p')
	{
		if (p->op_type == 21)
			res = get_long(ap);
		if (p->op_type == 22)
			res = get_longlong(ap);
		res = get_int(ap);
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X')
	{
		if (p->op_type == 21)
			res = get_ulong(c, ap);
		if (p->op_type == 22)
			res = get_ulonglong(c, ap);
		res = get_uint(c, ap);
	}
	if (c == 'c')
	{
		res = get_char(c, ap);
	}
	if (c == 's')
	{
		res = get_string(c, ap);
	}
	if (c == 'f')
	{
		if (p->op_type != 0)
			res = get_longdouble(c, ap);
		res = get_double(c, ap);
	}
	if (c == '%')
	{
		if (!(res = ft_strdup("%")))
			return (1);
	}
	if (p->op_width != 0)
		res = add_width(res, p);
	if (!(new_node(res, ft_strlen(res), p)))
		return (0);
	return (0); 
}
