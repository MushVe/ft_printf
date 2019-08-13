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

int		process(char c, va_list ap, t_p *p)
{
	if (c == 'd' || c  == 'i' || c == 'p')
	{
		if (p->op_type == 11)
			get_short(c, ap);
		if (p->op_type == 12)
			get_char(c, ap);
		if (p->op_type == 21)
			get_long(c, ap);
		if (p->op_type == 22)
			get_longlong(c, ap);
		get_int(c, ap);
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X')
	{
		if (p->op_type == 11)
			get_ushort(c, ap);
		if (p->op_type == 12)
			get_uchar(c, ap);
		if (p->op_type == 21)
			get_ulong(c, ap);
		if (p->op_type == 22)
			get_ulonglong(c, ap);
		get_uint(c, ap);
	}
	if (c == 'c')
	{
		get_char(c, ap);
	}
	if (c == 's')
	{
		get_string(c, ap);
	}
	if (c == 'f')
	{
		if (p->op_type != 0)
			get_longdouble(c, ap);
		get_double(c, ap);
	}
	return (0); 
}
