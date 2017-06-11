/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_asemanare.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 17:52:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 17:52:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_cont_table(char *src, char *table, char indice)
{
	char			*c;

	while (*src)
	{
		c = table + (unsigned char)*src;
		if (*c == indice)
			(*c)++;
		src++;
	}
}

static int			ft_reinit_int_table(char *table)
{
	int				i;
	int				k;

	i = 0;
	k = 0;
	while (i < 256)
	{
		if (table[i] == 2)
			table[k++] = (char)i;
		i++;
	}
	table[k] = 0;
	return (k);
}

char				*ft_strcmp_asemanare(char *src, char *find)
{
	char			table[256];

	ft_bzero(table, sizeof(char) * 256);
	ft_cont_table(src, table, 0);
	ft_cont_table(find, table, 1);
	ft_reinit_int_table(table);
	if (!*table)
		return (0);
	return (ft_strdup(table));
}
