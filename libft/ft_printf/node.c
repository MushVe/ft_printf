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
	t_lst *cpy;
	t_lst *tmp;

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

int	new_node(char *data, int size, t_lst **list)
{
	t_lst *cpy;
	t_lst *node;

	//ft_putendl(data);

	cpy = *list;
		//	ft_putendl("444");
	if (!(node = (t_lst*)ft_memalloc(sizeof(t_lst))))
		return (0);
		//	ft_putendl("555");
	if (!cpy)
	{
		//	ft_putendl("666");
		node->str = ft_strdup(data);
		node->size = size;
		node->next = NULL;
		*list = node;
		return 1;
	}
		//	ft_putendl("777");
	while (cpy->next != NULL)
	{
		//	ft_putendl("AAA");
		cpy = cpy->next;
		//	ft_putendl("888");
	}
//	ft_putendl("999");
	node->str = ft_strdup(data);
	node->size = size;
	node->next = NULL;
	cpy->next = node;
		//	ft_putendl("100");
	return (1);
}

char		*get_node(int aim, t_p *p)
{
	t_lst	*cpy;
	int				i;

	cpy = p->first;
	i = -1;
	while (++i < aim && cpy)
		cpy = cpy->next;
	return (cpy->str);
}
