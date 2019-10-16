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

char	*add_preci(char *res, t_p *p, char c)
{
	int		i;
	char	*it;

	it = NULL;
	i = -1 + ft_strlen(res);
	if (ft_strlen(res) > (unsigned long)p->op_preci && c == 's')
		res = ft_strsub(res, 0, p->op_preci);
	if (ft_strlen(res) < (unsigned long)p->op_preci && c != 's')
		while (++i < p->op_preci)
			res = ft_strjoin("0", res, 2);
	if ((it = ft_strchr(res, '-')) && (size_t)p->op_preci + 1 > ft_strlen(res))
	{
		it[0] = '0';
		res = ft_strjoin("-", res, 2);
	}
	return (res);
}

char	*add_width(char *res, t_p *p)
{
	int		i;
	char	*it;

	it = NULL;
	i = -1 + ft_strlen(res);
	if (p->op_less == 1)
		while (++i < p->op_width)
			res = ft_strjoin(res, " ", 1);
	else if (p->op_zero == 1)
	{
		while (++i < p->op_width)
			res = ft_strjoin("0", res, 2);
		if ((it = ft_strchr(res, '-')))
		{
			it[0] = '0';
			res[0] = '-';
		}
	}
	else
		while (++i < p->op_width)
			res = ft_strjoin(" ", res, 2);
	return (res);
}

char	*add_x(char *res, char c)
{
	if (c == 'x')
		res = ft_strjoin("0x", res, 2);
	if (c == 'X')
		res = ft_strjoin("0X", res, 2);
	return (res);
}

char	*add_sign(char *res, t_p *p)
{
	if (ft_strchr(res, '-'))
		return (res);
	if (p->op_plus == 1)
		res = ft_strjoin("+", res, 2);
	else if (p->op_space == 1)
		res = ft_strjoin(" ", res, 2);
	return (res);
}

int		process(char c, va_list ap, t_p *p)
{
	char *res;

	res = NULL;
	if (c == 'd' || c == 'i' || c == 'p')
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
	if (p->op_plus == 1 || p->op_space == 1)
		res = add_sign(res, p);
	if (p->op_preci != 0)
		res = add_preci(res, p, c);
	if (p->op_diese == 1)
		res = add_x(res, c);
	if (p->op_width != 0)
		res = add_width(res, p);
	if (!(new_node(res, ft_strlen(res), p)))
		return (0);
	return (0);
}
