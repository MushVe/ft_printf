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
		if ((p->op_plus == 1 || p->op_space == 1)
				&& p->flag != 'c' && c != '%' && c != 'u')
			res = add_sign(res, p);
		if ((p->op_diese == 1 && p->flag != 'c') || p->flag == 'p')
			res = add_x(res, c, p);
		if ((p->op_width != 0))
			res = add_width(res, p);
	}
	else
		res = ft_strdup("\0");
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
			res[0] = '\0';
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X' || c == 'p')
	{
		if (p->op_type == 21 || p->op_type == 22 || c == 'p')
			res = get_ulonglong(c, ap);
		else
			res = get_uint(c, ap);
		if (!(ft_strcmp(res, "0")) && (p->op_diese == 0 && p->op_point == 1)
				&& (c == 'x' || c == 'X' || c == 'o'))
			res[0] = '\0';
	}
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
	res = first_process(c, ap, p, res);
	if (c == 'c')
		res = get_char(c, ap, p);
	if (c == 's')
		res = get_string(c, ap);
	if (c == 'f')
	{
		if (p->op_type != 0)
			res = get_longdouble(c, ap);
		res = get_double(c, ap);
	}
	res = next_process(c, p, res);
	if (!(new_node(res, ft_strlen(res), p)))
		return (0);
	return (0);
}
