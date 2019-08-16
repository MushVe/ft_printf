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

char *get_long(char c, va_list ap)
{
	long res;

	(void)c;

	res = va_arg(ap, long);
	return (convert_signed((long long)res));
}

char *get_longlong(char c, va_list ap)
{
	long long res;

	(void)c;

	res = va_arg(ap, long long);
	return (convert_signed((long long)res));
}

char *get_int(char c, va_list ap)
{
	int res;

	(void)c;

	res = va_arg(ap, int);
	return (convert_signed((long long)res));
}