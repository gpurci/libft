/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 19:43:08 by gpurci            #+#    #+#             */
/*   Updated: 2016/11/21 16:59:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;

	i = 0;
	while (i < (int)n)
	{
		(((unsigned char*)dest)[i]) = (((unsigned char*)src)[i]);
		i++;
	}
	return ((void*)dest);
}
