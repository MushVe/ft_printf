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


int		process(char c, va_list ap)
{
	if (c == 'd' || c  == 'i')
	{
			va_arg(ap, int);
	}
	if (c == 'u')
	{
			va_arg(ap, unsigned int);
	}
	if (c == 'o')
	{
			va_arg(ap, unsigned int);
	}
	if (c == 'x' || c == 'X')
	{
			va_arg(ap, unsigned int);
	}
	if (c == 'c')
	{
			va_arg(ap, char);
	}
	if (c == 's')
	{
			va_arg(ap, char*);
	}
	if (c == 'p')
	{
			va_arg(ap, int);
	}
	if (c == 'f')
	{
			va_arg(ap, double);
	}
	return (0); 
}