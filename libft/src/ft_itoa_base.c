/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <cseguier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:22:41 by cseguier          #+#    #+#             */
/*   Updated: 2019/04/29 17:22:43 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_itoa_base(unsigned long long nb, int base, int alpha)
{
	char	*res;
	char	*tab;
	int		i;

	i = -1;
	if (!(res = (char*)ft_memalloc(sizeof(char) * 21)))
		return (0);
	if (alpha == 1)
		tab = ft_strdup("0123456789abcdef");
	else
		tab = ft_strdup("0123456789ABCDEF");
	while ((nb / base) && (++i < 21))
	{
		res[i] = tab[nb % base];
		nb /= base;
	}
	res[++i] = tab[nb % base];
	res[++i] = '\0';
	free(tab);
	return (ft_strrev(res, i - 1));
}