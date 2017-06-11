/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:53:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 19:53:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_set_string(char *ecuatie, int id, size_t len)
{
	char			*src;

	src = ft_strsub(ecuatie, 0, len);
	while (*ecuatie)
	{
		ecuatie = ft_strstr_find_limit(ecuatie, src, (int)len);
		if (!ecuatie)
			return;
		ft_memset(ecuatie, id, len);
		ecuatie += len;
	}
	ft_str_clear_and_delete(src);
}
