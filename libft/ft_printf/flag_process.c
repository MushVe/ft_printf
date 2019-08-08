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

void	*arg_seek(char c, int i_var, va_list ap)
{
	int i;

	i = -1;
	while(++i < i_var)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i = va_arg(ap, int);
	}
	va_end(ap);
	ft_putchar('\n');
}

int		process(char c, int i_var)
{


	return (0); 
}