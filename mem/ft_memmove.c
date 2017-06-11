/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 18:38:20 by gpurci            #+#    #+#             */
/*   Updated: 2016/11/21 14:44:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;

	if (dest > src)
	{	
		i = (int)n - 1;
		while (i > -1)
		{
			(((unsigned char*)dest)[i]) = (((unsigned char*)src)[i]);
			i--;
		}
	}
	else if (dest < src)
	{
		i = 0;
		while (i < (int)n)
		{
			(((unsigned char*)dest)[i]) = (((unsigned char*)src)[i]);
			i++;
		}
	}
	return (dest);
}
