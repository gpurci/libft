/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 15:34:56 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 15:34:58 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_realloc_str(char **src, size_t n)
{
	char			*aloc;

	n++;
	aloc = (char*)(malloc(sizeof(char) * n));
	if (aloc != 0)
	{
		ft_strncpy(aloc, *src, n);
		ft_strClrDel(src);
		return (aloc);
	}
	return (NULL);
}
