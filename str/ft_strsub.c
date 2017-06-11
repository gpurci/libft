/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:36:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 21:39:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *src;

	if (!s || ft_strlen(s + start) < len)
		return (0);
	if (!(src = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (len == 0)
		return (src);
	src = ft_strncpy(src, s + start, len);
	src[len] = 0;
	return (src);
}
