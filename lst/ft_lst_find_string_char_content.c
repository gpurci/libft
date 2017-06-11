/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_string_char_content.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 21:01:09 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/12 21:01:11 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lst_find_string_char_content(t_list *tmp, char content)
{
	while (tmp)
	{
		if (ft_strchr((char*)tmp->content, content))
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
