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

int	get_type(t_p *p, char c)
{
	if (c == 'h')
	{ 
		if (p->op_type != 0 && p->op_type != 11)
			return (1); //error
		if (p->op_type = 0)
			p->op_type += 10;
	}
	if (c == 'l')
	{ 
		if (p->op_type != 0 && p->op_type != 21)
			return (1); //error
		if (p->op_type = 0)
			p->op_type += 20;
	}
	if (c == 'L')
	{ 
		if (p->op_type != 0 && p->op_type != 31)
			return (1); //error
		if (p->op_type = 0)
			p->op_type += 30;
	}
	p->op_type += 1;
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
		// stocker options dans variables (erreurs pas gerees)
				if (frmt[i] == '+') p->op_plus = 1;
				else if (frmt[i] == '-') p->op_less = 1;
				else if (frmt[i] == ' ') p->op_space = 1;
				else if (frmt[i] == '#') p->op_diese = 1;
				else if (frmt[i] == '0') p->op_zero = 1;
				else if (ft_isdigit(frmt[i]) && frmt[i - 1] != '.'
					&& p->op_presc == 0)
					p->op_presc = ft_atoi(frmt + i);
				else if (ft_isdigit(frmt[i]) && frmt[i - 1] == '.'
					&& p->op_width == 0)
					p->op_width = ft_atoi(frmt + i);
				else if (frmt[i] == 'h' || frmt[i] == 'l' || frmt[i] == 'L')
					get_type(p, frmt[i]);
				else return (0); //error
				i++;
			}
			// envoyer le flag pour traitement puis stocker dans node
			process(frmt[i], ap, p);
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