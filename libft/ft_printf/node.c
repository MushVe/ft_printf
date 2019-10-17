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

void	free_list(t_lst **list)
{
	t_lst	*cpy;
	t_lst	*tmp;

	cpy = *list;
	tmp = NULL;
	while (cpy)
	{
		tmp = cpy->next;
		free(cpy);
		cpy = NULL;
		cpy = tmp;
	}
}

int		new_node(char *data, int size, t_p *p)
{
	t_lst	*cpy;
	t_lst	*node;

	cpy = p->first;
	if (!(node = (t_lst*)ft_memalloc(sizeof(t_lst))))
		return (0);
	node->str = ft_strdup(data);
	node->size = size;
	if (p->null == 1)
		node->null = 1;
	else
		node->null = 0;
	node->next = NULL;
	if (!cpy)
	{
			p->first = node;
			return (1);
	}
	while (cpy->next != NULL)
		cpy = cpy->next;
	cpy->next = node;
	return (1);
}

char	*get_node(int aim, t_p *p)
{
	t_lst	*cpy;
	int		i;

	cpy = p->first;
	i = -1;
	while (++i < aim && cpy)
		cpy = cpy->next;
	return (cpy->str);
}
