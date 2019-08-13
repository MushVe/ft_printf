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

char *get_string(char c, va_list ap)
{
	char *res;

	res = va_arg(ap, char*);
}

char *get_longdouble(char c, va_list ap)
{
	long double res;

	res = va_arg(ap, long double);
}

char *get_double(char c, va_list ap)
{
	double res;

	res = va_arg(ap, double);
}
