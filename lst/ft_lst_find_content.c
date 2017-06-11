/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 19:24:35 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 19:24:36 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lst_find_content(t_list *tmp, void *content, size_t size)
{
	while (tmp)
	{
		if (size == tmp->content_size)
		{
			if (!ft_memcmp(tmp->content, content, size))
				return (tmp);
		}
		tmp = tmp->next;
	}
	return (0);
}
