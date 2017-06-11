/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_equal_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 19:20:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 19:20:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				ft_lst_equal_content(t_list *tmp, void *content, size_t size)
{
	while (tmp)
	{
		if (size == tmp->content_size)
		{
			if (!ft_memcmp(tmp->content, content, size))
				return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
