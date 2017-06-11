/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swich.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:47:15 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/12 16:47:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lst_swich(t_list *tmp1, t_list *tmp2)
{
	void			*content;
	size_t			size;

	content = tmp1->content;
	size = tmp1->content_size;
	tmp1->content = tmp2->content;
	tmp1->content_size = tmp2->content_size;
	tmp2->content = content;
	tmp2->content_size = size;
}
