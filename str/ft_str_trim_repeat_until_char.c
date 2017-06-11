/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_trim_repeat_until_char.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:01:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/10 18:01:26 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void				ft_set_in_one_repet_until_char(char *src, char caracter, size_t len)
{
	char 			*ptr1;
	size_t			i;
	size_t			j;

	j = 0;
	while (j < len)
	{
		i = ft_strlen_var(&src[j], caracter);
		if (j + i == len)
			return ;
		ptr1 = (src + ++i + j);
		while ((ptr1 = ft_strstr_find_limit(ptr1, &src[j], i - 1)))
		{
			if (*(ptr1 - 1) < 45 && *(ptr1 + i - 1) < 45)
				ft_memset(ptr1, 33, i);
			ptr1 = ptr1 + i;
		}
		i += ft_strlen_limit_lower(&src[j + i], 34) + j;
		j = i;
	}
	src[len] = 0;
}

char 				*ft_str_trim_repeat_until_char(char *src, char caracter)
{
	size_t			i;
	size_t			j;
	size_t			k;
	size_t			len;

	if (!src)
		return (0);
	k = ft_strlen_var(src, caracter);
	len = ft_strlen(src);
	if (k == len)
		return (src);
	ft_set_in_one_repet_until_char(src, caracter, len);
	j = ++k;
	while (j < len)
	{
		j += ft_strlen_limit_lower(&src[j], 34);
		if (j == len)
			break ;
		i = ft_strlen_var(&src[j], caracter);
		ft_memmove(&src[k], &src[j], ++i);
		k += i;
		j += i;
	}
	src[k] = 0;
	if (src[--k] == ',')
		src[k] = 0;
	return (ft_strdup_realloc(src));
}
