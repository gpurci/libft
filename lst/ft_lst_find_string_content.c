/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_string_content.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 15:52:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/09 15:52:53 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lst_find_string_content(t_list *tmp, void *content)
{
	while (tmp)
	{
		if (!ft_strcmp((char*)tmp->content, (char*)content))
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
