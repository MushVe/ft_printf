/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//	void	va_start(va_list ap, last);
//	type	va_arg(va_list ap, type);
//	void	va_copy(va_list dest, va_list src);
//	void	va_end(va_list ap);

void printargs(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);
	i = arg1;
	while(i >= 0)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i = va_arg(ap, int);
	}
	va_end(ap);
	ft_putchar('\n');
}

int		ft_printf(const char * restrict format, ...)
{

	parser(format);

	return (0);
}