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

char	*next_process(char c, t_p *p, char *res)
{
	if (isflag(p->flag, p))
	{
		if (p->op_preci != 0 && p->flag != 'c')
			res = add_preci(res, p, c);
		if (p->op_preci == 0 && p->op_point != 0
			&& (p->flag == 's' || p->flag == 'u'))
		{
			ft_memdel((void*)&res);
			if (!(res = ft_strdup("\0")))
				return (0);
		}
		if ((p->op_plus == 1 || p->op_space == 1)
			&& p->flag != 'c' && c != '%')
			res = add_sign(res, p);
		if ((p->op_diese == 1 && p->flag != 'c') || p->flag == 'p')
			res = add_x(res, c, p);
		if ((p->op_width != 0))
			res = add_width(res, p);
	}
	else
	{
	// printf("\n{res after preci %p}\n", res);
		ft_memdel((void*)&res);
		if (!(res = ft_strdup("\0")))
			return (0);
	}
	// printf("\n{res before preci %p}\n", res);
	return (res);
}



char	*first_process(char c, va_list ap, t_p *p, char *res)
{
	if (c == 'd' || c == 'i')
	{
		if (p->op_type == 21 || p->op_type == 22)
			res = get_longlong(ap);
		else
			res = get_int(ap, p);
		if (!(ft_strcmp(res, "0")) && p->op_point == 1)
		{
			ft_memdel((void*)&res);
			if (!(res = ft_strdup("\0")))
				return (0);
		}
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X' || c == 'p')
	{
	// printf("\n{res before all %p}\n", res);
		if (p->op_type == 21 || p->op_type == 22 || c == 'p')
		{	res = get_ulonglong(c, ap);
		// printf("\n{res after long %p}\n", res);
		}
		else
			res = get_uint(c, ap, p);
		if (!(ft_strcmp(res, "0")) && (p->op_diese == 0 && p->op_point == 1)
				&& (c == 'x' || c == 'X' || c == 'o' || c == 'p'))
		{
			ft_memdel((void*)&res);
		// printf("\n{res before dup %p}\n", res);
			if (!(res = ft_strdup("\0")))
				return (0);
		// printf("\n{res after dup %p}\n", res);
		}
		// printf("\n{res after get %p}\n", res);
	}
	//// printf("\n{res = %p}\n", res);
	return (res);
}

int		process(char c, va_list ap, t_p *p)
{
	char	*res;

	res = NULL;
	if (c == '%')
	{
		if (!(res = ft_strdup("%")))
			return (0);
	}
	// printf("\n{res before first %p}\n", res);
	res = first_process(c, ap, p, res);
	// printf("\n{res after first %p}\n", res);
	if (c == 'c')
		res = get_char(c, ap, p);
	if (c == 's')
		res = get_string(c, ap);
	res = next_process(c, p, res);
	// printf("\n{res after next%p}\n", res);
	if (!(new_node(res, ft_strlen(res), p)))
		return (0);
//	ft_memdel((void*)&res);
	return (0);
}
