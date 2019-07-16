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

int	parser(const char * restrict format, t_linkedlist **list)
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
			new_node(ft_stridup(format + j, i - j), i - j, list);
			// envoyer le flag pour traitement
		}
		if (format[i] == ' ' && flag == 1)
		{
			j = i;
		}
		
	}

	return (0);
}