/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_nou.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 18:16:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/12 18:17:01 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub_nou(char const *s, unsigned int start, size_t len)
{
	char	*src;
	size_t	k;

	if (!s || ft_strlen(s) < start)
		return (0);
	if ((k = ft_strlen(s + start)) > len)
		k = len;
	if (!(src = (char*)malloc(sizeof(char) * (k + 1))))
		return (0);
	if (k == 0)
		return (src);
	src = ft_strncpy(src, s + start, k);
	src[k] = 0;
	return (src);
}
