/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort_content_size_crtr.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 15:24:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/12 15:24:33 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>///////////
void				ft_lst_sort_content_size_crtr(t_list *beg)
{
	t_list			*ap;
	size_t			size;

	//printf("ft_lst_sort_content_size_crtr\n");
	while (beg)
	{
		//printf("prime content = $%s$ size = %zu\n", (char*)beg->content, beg->content_size);
		size = beg->content_size;
		ap = beg->next;
		while (ap)
		{
			//printf("two content = $%s$ size = %zu\n", (char*)ap->content, ap->content_size);
			if (ap->content_size < size)
			{
				//printf("gasit\n");
				ft_lst_swich(beg, ap);
				size = ap->content_size;
			}
			ap = ap->next;
		}
		//printf("pre1 content = $%s$ size = %zu\n", (char*)beg->content, beg->content_size);
		beg = beg->next;
	}
	//printf("sfirsit ft_lst_sort_content_size_crtr\n");
}
