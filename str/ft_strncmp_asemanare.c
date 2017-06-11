/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_asemanare.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 18:25:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 18:25:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_cont_table(char *src, char *table, char indice, size_t size)
{
	size_t			i;
	char			*c;

	i = 0;
	while (i < size)
	{
		c = table + (unsigned char)*src;
		if (*c == indice)
			(*c)++;
		src++;
		i++;
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

char				*ft_strncmp_asemanare(char *src, char *find, size_t size1, size_t size2)
{
	char			table[256];

	ft_bzero(table, sizeof(char) * 256);
	ft_cont_table(src, table, 0, size1);
	ft_cont_table(find, table, 1, size2);
	ft_reinit_int_table(table);
	if (!*table)
		return (0);
	return (ft_strdup(table));
}
