/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char *get_short(char c, va_list ap)
{
	short res;

	res = va_arg(ap, short);
}

char *get_char(char c, va_list ap)
{
	char res;

	res = va_arg(ap, char);
	return res;
}

char *get_long(char c, va_list ap)
{
	long res;

	res = va_arg(ap, long);
}

char *get_longlong(char c, va_list ap)
{
	long long res;

	res = va_arg(ap, long long);
}

char *get_int(char c, va_list ap)
{
	int res;

	res = va_arg(ap, int);
}
