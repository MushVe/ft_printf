/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_double.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*get_string(char c, va_list ap)
{
	char	*res;
	char	*tmp;

	(void)c;
	tmp = va_arg(ap, char*);
	if (tmp == NULL)
		res = ft_strdup("(null)");
	else
		res = ft_strdup(tmp);
	return (res);
}

char	*get_char(char c, va_list ap, t_p *p)
{
	char	*res;

	(void)c;
	if (!(res = ft_strnew(1)))
		return (0);
	res[0] = va_arg(ap, int);
	if (res[0] == (char)NULL)
		p->null = 1;
	return (res);
}

char	*get_longdouble(char c, va_list ap)
{
	long double	res;

	(void)c;
	res = va_arg(ap, long double);
	return (0);
}

char	*get_double(char c, va_list ap)
{
	double	res;

	(void)c;
	res = va_arg(ap, double);
	return (0);
}
