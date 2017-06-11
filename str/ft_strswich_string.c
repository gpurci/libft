/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswich_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 17:41:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:18:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*ft_switch(t_two_ptr_char *src,
	t_two_ptr_char *sch, t_tree_int *id)
{
	char				*c;

	c = src->ptr2;
	id->i = 0;
	while (src->ptr1[id->i])
	{
		if (!ft_strncmp(src->ptr1 + id->i, sch->ptr1, id->k))
		{
			ft_strcpy(src->ptr2, sch->ptr2);
			src->ptr2 += id->j;
			id->i += id->k;
		}
		else
		{
			*src->ptr2 = src->ptr1[id->i];
			src->ptr2++;
			id->i++;
		}
	}
	*src->ptr2 = 0;
	ft_strClrDel(&src->ptr1);
	return (c);
}

char					*ft_strswich_string(char *src, char *old, char *nou)
{
	t_tree_int			id;
	t_two_ptr_char		comand[2];

	if (!src || !old || !nou)
		return (src);
	if (!ft_strcmp(old, nou))
		return (src);
	if (!ft_strstr(src, old))
		return (src);
	if (!(id.i = ft_count_word(src, old)))
		return (src);
	comand[1].ptr1 = old;
	comand[1].ptr2 = nou;
	comand[0].ptr1 = ft_strdup(src);
	comand[0].ptr2 = src;
	if ((id.k = ft_strlen(old)) == (id.j = ft_strlen(nou)))
		return (ft_switch(&comand[0], &comand[1], &id));
	comand[0].ptr2 = ft_strrealloc(src, ft_strlen(src) + id.i * (id.j - id.k));
	return (ft_switch(&comand[0], &comand[1], &id));
}
