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

void	free_list(t_linkedlist **list)
{
	t_linkedlist *cpy;
	t_linkedlist *tmp;

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

void	new_node(char *data, int size, t_linkedlist **list)
{
	t_linkedlist *cpy;
	t_linkedlist *node;

	cpy = *list;
	if (!(node = (t_linkedlist*)ft_memalloc(sizeof(t_linkedlist))))
		put_exit("malloc node error");
	if (!cpy)
	{
		node->str = ft_strdup(data);
		node->size = size;
		node->next = NULL;
		*list = node;
		return ;
	}
	while (cpy->next != NULL)
		cpy = cpy->next;
	node->str = ft_strdup(data);
	node->size = size;
	node->next = NULL;
	cpy->next = node;
}

int		get_node(int aim, t_param *p)
{
	t_linkedlist	*cpy;
	int				i;

	cpy = p->first;
	i = -1;
	while (++i < aim && cpy)
		cpy = cpy->next;
	return (cpy->str);
}
