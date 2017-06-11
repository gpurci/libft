/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delete_egal_content_one.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:44:56 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/17 21:44:58 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lst_delete_egal_content_one(t_list *elem)
{
	t_list			*tmp;
	void			*c;

	c = elem->content;
	while (elem->next)
	{
		tmp = elem->next;
		if (tmp->content_size == elem->content_size &&
			!ft_memcmp(c, tmp->content, tmp->content_size))
		{
			elem->next = tmp->next;
			ft_lstdelone(&tmp, &ft_lstdel_function);
		}
		else
			elem = elem->next;
	}
}
