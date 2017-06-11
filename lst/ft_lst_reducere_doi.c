/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reducere_doi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:31:46 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/17 16:31:49 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lst_reducere_doi(t_list **prime, t_list **tmp,
	t_list **beg, t_list *pre1, t_list *pre2)
{
	char			f;

	f = 1;
	if ((*tmp)->next == (*beg))
		f = 0;
	ft_lst_del_mijloc(pre1, (tmp));
	ft_lst_del_mijloc(pre2, (beg));
	if (!f)
	{
		(*tmp) = (*beg);
		if ((*tmp))
			(*beg) = (*beg)->next;
		if (pre1)
			pre1->next = (*tmp);
		else
			(*prime) = (*tmp);
	}				
}
