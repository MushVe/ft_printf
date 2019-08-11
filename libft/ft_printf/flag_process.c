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

char *get_int(char c, va_list ap)
{
	char *res = NULL;
	(void)c;
	va_arg(ap, int);
	
	return (res);
}

char *get_uint(char c, va_list ap)
{
	char *res = NULL;
		(void)c;

	va_arg(ap, unsigned int);
	
	return (res);
}

char *get_char(char c, va_list ap)
{
	char *res = NULL;
		(void)c;

	char rando = va_arg(ap, int);
	(void)rando;
	return (res);
}

char *get_string(char c, va_list ap)
{
	char *res = NULL;
		(void)c;

	va_arg(ap, char*);
	
	return (res);
}

char *get_double(char c, va_list ap)
{
	char *res = NULL;
		(void)c;

	va_arg(ap, double);
	
	return (res);
}

int		process(char c, va_list ap, t_p *p)
{
	if (c == 'd' || c  == 'i' || c == 'p')
	{
		if (p->op_type == 11)
			get_short_int(c, ap);
		if (p->op_type == 12)
			get_char(c, ap);
		if (p->op_type == 21)
			get_long_int(c, ap);
		if (p->op_type == 22)
			get_longlong_int(c, ap);

		get_int(c, ap);
	}
	if (c == 'u' || c == 'o' || c == 'x' || c == 'X')
	{
		if (p->op_type == 11)
			get_shor_utint(c, ap);
		if (p->op_type == 12)
			get_uchar(c, ap);
		if (p->op_type == 21)
			get_long_uint(c, ap);
		if (p->op_type == 22)
			get_longlong_uint(c, ap);
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