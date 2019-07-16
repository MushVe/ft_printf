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

int		print_node(t_param *p)
{
	t_llist	*cpy;
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

int	parser(const char * restrict format, t_llist **list, t_param *p)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = -1;
	j = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			flag = 1;
		//	ft_putendl("000");
			if (!(new_node(ft_stridup(format + j, i - j), i - j, list)))
				return (0);
		//	ft_putendl("111");
			// envoyer le flag pour traitement
		}
		if (format[i] == ' ' && flag == 1)
		{
			j = i;
			flag = 0;
		}
		
	}
	p->first = *list;
//	ft_putendl("222");
	print_node(p);
//	ft_putendl("333");

	return (0);
}