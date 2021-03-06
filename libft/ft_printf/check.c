/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:01:55 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 14:01:57 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		isflag(char c, t_p *p)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'o' || c == 'p'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
	{
		p->flag = c;
		return (1);
	}
	return (0);
}

int		isoption(char c)
{
	if ((c >= '0' && c <= '9') || c == ' ' || c == '+' || c == '-'
		|| c == 'h' || c == 'l' || c == 'L' || c == '#' || c == '.')
		return (1);
	return (0);
}
