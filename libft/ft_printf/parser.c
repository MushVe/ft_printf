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
		if (p->op_type == 0)
			p->op_type += 10;
	}
	if (c == 'l')
	{ 
		if (p->op_type != 0 && p->op_type != 21)
			return (1); //error
		if (p->op_type == 0)
			p->op_type += 20;
	}
	if (c == 'L')
	{ 
		if (p->op_type != 0 && p->op_type != 31)
			return (1); //error
		if (p->op_type == 0)
			p->op_type += 30;
	}
	p->op_type += 1;
	return (0);
}

int	get_options(t_p *p, const char *frmt)
{
	// stocker options dans variables (erreurs pas gerees)
	//ft_putendl("111");
	if (frmt[0] == '+') p->op_plus = 1;
	else if (frmt[0] == '-') p->op_less = 1;
	else if (frmt[0] == ' ') p->op_space = 1;
	else if (frmt[0] == '#') p->op_diese = 1;
	else if (frmt[0] == '0' && p->op_width == 0 && p->op_preci == 0)
		p->op_zero = 1;
	else if (frmt[0] == '.') p->op_point = 1;
	else if (ft_isdigit(frmt[0]) && p->op_point == 0 && p->op_width == 0)
	 	p->op_width = ft_atoi(frmt);
	else if (ft_isdigit(frmt[0]) && p->op_point == 1 && p->op_preci == 0)
		p->op_preci = ft_atoi(frmt);
	else if (frmt[0] == 'h' || frmt[0] == 'l' || frmt[0] == 'L')
	{
			get_type(p, frmt[0]);
			p->op_type = 1;
	}
	else if (!(ft_isdigit(frmt[0]) && (p->op_width != 0 || p->op_preci != 0)))
	{
		printf("\tzr> %d\tpr> %d\tpt> %d\twh> %d\terror\n",
			p->op_zero, p->op_preci, p->op_point, p->op_width);
		return (0); //error
	}
	printf("\tzr> %d\tpr> %d\tpt> %d\twh> %d\n",
		p->op_zero, p->op_preci, p->op_point, p->op_width);	
	return (1);
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
				if (!(new_node(ft_stridup(frmt + j, i - j), i - j, p)))
					return (0);
		}
		else if (flag == 0)
		{
			while (!(isflag(frmt[i])))
			{
				printf("i : %c", frmt[i]);
				if (!(get_options(p, frmt + i)))
					return (0); //error
				i++;
			}
	// envoyer le flag pour traitement puis stocker dans node
			process(frmt[i], ap, p);
			flag = 1;
			j = i + 1;
		}
	}
	if (j + 1 != i)
		if (!(new_node(ft_stridup(frmt + j, i - j), i - j, p)))
			return (0);
	print_node(p);
	return (0);
}
