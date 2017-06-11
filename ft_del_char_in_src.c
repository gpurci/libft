/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_char_in_src.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 21:34:49 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 21:34:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_del_char_in_src(char *src, char *del)
{
	char 			c[2];

	if (!src || !del)
		return (0);
	while (*del)
	{
		ft_strswich(src, *del, 1);
		del++;
	}
	c[0] = 1;
	c[1] = 0;
	del = src;
	src = ft_strswich_string(src, c, "");
	ft_strClrDel(&del);
	return (src);
}
