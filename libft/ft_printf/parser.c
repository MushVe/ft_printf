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

int		isflag(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'o'
		|| c == 'u' || c == 'x' || c == 'X' || c == 'f' || c == '%')
		return (1);
	return (0);
}

int		print_node(t_p *p)
{
	t_lst	*cpy;
	int		i;

	cpy = p->first;
	i = -1;
	while (cpy)
	{
	//	ft_putendl("BBB");
		ft_putstr(cpy->str);
		cpy = cpy->next;
	}
	return (0);
}

int	parser(const char * restrict frmt, t_p *p, va_list ap)
{
	int	i;
	int	j;
	int	flag;

	flag = 1;
	i = -1;
	j = 0;
	while (frmt[++i])
	{
		if (flag == 1 && (frmt[i] == '%' || frmt[i] == '\0'))
		{
			flag = 0;
			if (j != i)
				if (!(new_node(ft_stridup(frmt + j, i - j), i - j, &p->first)))
					return (0);
		}
		else if (flag == 0)
		{
			while (!(isflag(frmt[i])))
			{
			// envoyer le flag pour traitement puis stocker dans node
				process(frmt[i], ap);
				i++;
			}
			flag = 1;
			j = i + 1;
		}
	}
	if (j + 1 != i)
		if (!(new_node(ft_stridup(frmt + j, i - j), i - j, &p->first)))
			return (0);
//	ft_putendl("222");
	print_node(p);
//	ft_putendl("333");

	return (0);
}