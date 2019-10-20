/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_stuff.c                                        :+:      :+:    :+:   */
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
			res = ft_strjoin("0", res, 0);
	if ((it = ft_strchr(res, '-')) && (size_t)p->op_preci + 1 > ft_strlen(res))
	{
		it[0] = '0';
		res = ft_strjoin("-", res, 0);
	}
	return (res);
}

char	*adjust_width(char *res, char *it, int i, t_p *p)
{
	while (++i < p->op_width)
		res = ft_strjoin("0", res, 0);
	if ((it = ft_strchr(res, '-')))
	{
		it[0] = '0';
		res[0] = '-';
	}
	if ((p->op_diese == 1 && p->flag != 'c') || p->flag == 'p')
	{
		it = ft_strchr(res, 'x');
		it[0] = '0';
		if (p->flag == 'X')
			res[1] = 'X';
		if (p->flag == 'x' || p->flag == 'p')
			res[1] = 'x';
	}
	if (p->op_plus == 1 && p->flag != 'c' && !(ft_strchr(res, '-')))
	{
		it = ft_strchr(res, '+');
		it[0] = '0';
		res[0] = '+';
	}
	return (res);
}

char	*add_width(char *res, t_p *p)
{
	int		i;
	char	*it;

	it = NULL;
	i = -1 + ft_strlen(res);
	if (p->null == 1)
		i++;
	if (p->op_less == 1)
		while (++i < p->op_width)
			res = ft_strjoin(res, " ", 0);
	else if ((p->op_zero == 1 && p->op_preci == 0)
		&& !(p->flag == 'p' && p->op_point == 1 && p->op_preci == 0))
		res = adjust_width(res, it, i, p);
	else
	{
		while (++i < p->op_width)
			res = ft_strjoin(" ", res, 0);
	}
	return (res);
}

char	*add_x(char *res, char c, t_p *p)
{
	if (!(ft_strcmp(res, "0")))
	{
		if (p->op_point == 1 && c != 'o')
			res[0] = '\0';
		return (res);
	}
	if (c == 'x' || c == 'p')
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
