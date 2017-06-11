/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:49:46 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:49:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lst_sort_content(t_list *tmp)
{
	while (tmp)
	{
		ft_memsort(tmp->content, tmp->content_size);
		tmp = tmp->next;
	}
}
