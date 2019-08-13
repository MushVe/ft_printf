/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char *get_ushort(char c, va_list ap)
{
	unsigned short res;

	res = va_arg(ap, unsigned short);
	return (convert_unsigned((unsigned long long)res));
}

char *get_uchar(char c, va_list ap)
{
	unsigned char res;

	res = va_arg(ap, unsigned char);
	return (convert_unsigned((unsigned long long)res));
}

char *get_ulong(char c, va_list ap)
{
	unsigned long res;

	res = va_arg(ap, unsigned long);
	return (convert_unsigned((unsigned long long)res));
}

char *get_ulonglong(char c, va_list ap)
{
	unsigned long long res;

	res = va_arg(ap, unsigned long long);
	return (convert_unsigned((unsigned long long)res));
}

char *get_uint(char c, va_list ap)
{
	unsigned int res;

	res = va_arg(ap, unsigned int);
	return (convert_unsigned((unsigned long long)res));
}
