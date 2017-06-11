/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delete_egal_content_all.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 21:43:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/17 21:43:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lst_delete_egal_content_all(t_list *elem)
{
	while (elem)
	{
		ft_lst_delete_egal_content_one(elem);
		elem = elem->next;
	}
}
