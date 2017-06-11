/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_mijloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 20:26:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/16 20:26:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lst_del_mijloc(t_list *pre, t_list **ap)
{
	char		f;

	f = 0;
	if (pre)
	{
		f = 1;
		(pre)->next = (*ap)->next;
	}
	else
		(pre) = (*ap)->next;
	ft_lstdelone(ap, &ft_lstdel_str_function);
	if (f)
		(*ap) = (pre)->next;
	else
	{
		(*ap) = (pre);
		(pre) = 0;
	}
}
