/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_maxim_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:20:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:20:06 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lst_maxim_size(t_list *tmp)
{
	t_list			*find;
	size_t			size;

	if (!tmp)
		return (0);
	size = tmp->content_size;
	find = tmp;
	tmp = tmp->next;
	while (tmp)
	{
		if (size < tmp->content_size)
		{
			find = tmp;
			size = tmp->content_size;
		}
		tmp = tmp->next;
	}
	return (find);
}
