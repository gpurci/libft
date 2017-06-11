/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 20:53:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 17:17:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrealloc(char *src, size_t n)
{
	char			*aloc;

	n++;
	aloc = (char*)(malloc(sizeof(char) * n));
	if (aloc != 0)
		return (ft_strncpy(aloc, src, n));
	return (NULL);
}
