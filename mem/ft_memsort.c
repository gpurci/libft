/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:43:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:43:27 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memsort(void *s, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*c;
	unsigned char	k;

	c = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		j = i;
		while (j < n)
		{
			if (c[i] > c[j])
			{
				k = c[i];
				c[i] = c[j];
				c[j] = k;
			}
			j++;
		}
		i++;
	}
	return (s);
}
