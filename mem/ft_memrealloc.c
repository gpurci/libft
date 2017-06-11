/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 21:16:42 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 21:16:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memrealloc(void *src, size_t n)
{
	void			*aloc;

	aloc = (void*)(malloc(sizeof(void) * n));
	if (aloc != 0)
		return (ft_memcpy(aloc, src, n));
	return (NULL);
}
