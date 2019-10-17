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

	// printf("preci = %d\n", p->op_preci);
	it = NULL;
	i = -1 + ft_strlen(res);
	if (ft_strlen(res) > (unsigned long)p->op_preci && c == 's')
		res = ft_strsub(res, 0, p->op_preci);
	if (ft_strlen(res) < (unsigned long)p->op_preci && c != 's')
		while (++i < p->op_preci)
			res = ft_strjoin("0", res, 0);
	if ((it = ft_strchr(res, '-')) && (size_t)p->op_preci + 1 > ft_strlen(res))
	{
		it[0] = '0';
		res = ft_strjoin("-", res, 0);
	}
	return (res);
}

char	*add_width(char *res, t_p *p)
{
	int		i;
	char	*it;

	// printf("width = %d\n", p->op_width);
	it = NULL;
	i = -1 + ft_strlen(res);
	if (p->null == 1)
		i++;
	if (p->op_less == 1)
		while (++i < p->op_width)
			res = ft_strjoin(res, " ", 0);
	else if (p->op_zero == 1)
	{
		while (++i < p->op_width)
			res = ft_strjoin("0", res, 0);
		if ((it = ft_strchr(res, '-')))
		{
			it[0] = '0';
			res[0] = '-';
		}
		if (p->op_diese == 1 && p->flag != 'c')
		{
			it = ft_strchr(res, 'x');
			it[0] = '0';
			if (p->flag == 'X')
				res[1] = 'X';
			if (p->flag == 'x')
				res[1] = 'x';
		}
		if (p->op_plus == 1 && p->flag != 'c')
		{
			it = ft_strchr(res, '+');
			it[0] = '0';
			res[0] = '+';
		}
	}
	else
		while (++i < p->op_width)
			res = ft_strjoin(" ", res, 0);
	return (res);
}

char	*add_x(char *res, char c, t_p *p)
{
	// printf("Here?\t%s\n", res);
	if (!(ft_strcmp(res, "0")))
	{
		if (p->op_point == 1 && c != 'o')
			res[0] = '\0';
		return (res);

	}
	if (c == 'x')
		res = ft_strjoin("0x", res, 0);
	if (c == 'X')
		res = ft_strjoin("0X", res, 0);
	if (c == 'o')
		res = ft_strjoin("0", res, 0);
	return (res);
}

char	*add_sign(char *res, t_p *p)
{
	if (ft_strchr(res, '-'))
		return (res);
	if (p->op_plus == 1)
		res = ft_strjoin("+", res, 0);
	else if (p->op_space == 1)
		res = ft_strjoin(" ", res, 0);
	return (res);
}

int		process(char c, va_list ap, t_p *p)
{
	char *res;

	res = NULL;
	if (c == 'd' || c == 'i' || c == 'p')
	{
		// if (p->op_type == 21)
		// 	res = get_long(ap);
		// if (p->op_type == 22)
		// 	res = get_longlong(ap);
		if (p->op_type == 21 || p->op_type == 22)
			res = get_longlong(ap);
		else res = get_int(ap, p);
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X')
	{
		// if (p->op_type == 21)
		// 	res = get_ulong(c, ap);
		// if (p->op_type == 22)
		// 	res = get_ulonglong(c, ap);
		if (p->op_type == 21 || p->op_type == 22)
			res = get_ulonglong(c, ap);
		else res = get_uint(c, ap);
		if (!(ft_strcmp(res, "0")) && (p->op_diese != 1 && p->op_point == 1)
				&& (c == 'x' || c == 'X' || c == 'o'))
			res[0] = '\0';
	}
	if (c == 'c')
	{
		res = get_char(c, ap, p);
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
			return (0);
	}
//	printf("null = %d\n", p->null);
	if (p->op_preci != 0 && p->flag != 'c')
		res = add_preci(res, p, c);
	if ((p->op_plus == 1 || p->op_space == 1) && p->flag != 'c' && c != '%'
		&& c != 'u')
		res = add_sign(res, p);
	if (p->op_diese == 1 && p->flag != 'c')
			res = add_x(res, c, p);
	if ((p->op_width != 0)) // &&(p->flag != 'c' || p->null == 1))
		res = add_width(res, p);
	if (!(new_node(res, ft_strlen(res), p)))
		return (0);
	return (0);
}
