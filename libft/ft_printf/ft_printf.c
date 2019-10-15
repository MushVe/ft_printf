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

void	init(t_p *p)
{
	p->first = NULL;
	p->op_plus = 0;
	p->op_less = 0;
	p->op_space = 0;
	p->op_diese = 0;
	p->op_zero = 0;
	p->op_preci = 0;
	p->op_point = 0;
	p->op_width = 0;
	p->op_type = 0;
}

int		ft_printf(const char * restrict format, ...)
{
	t_p p;
	va_list ap;

	va_start(ap, format);
	init(&p);
	parser(format, &p, ap);

	return (0);
}