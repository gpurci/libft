/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 13:31:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/03 13:31:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_cont_table(char *src, char *table, char indice)
{
	while (*src)
	{
		if (*(table + *src) == indice)
			(*(table + *src))++;
		src++;
	}
}

static int			ft_count_number(char *table, char indice)
{
	int				i;
	int				k;

	i = 0;
	k = 0;
	while (table[i])
	{
		if (table[i] == indice)
			k++;
		i++;
	}
	return (k);
}

static int			ft_reinit_int_table(char *table)
{
	int				i;
	int				k;

	i = 0;
	k = 0;
	while (i < 127)
	{
		if (table[i] != 0)
			table[k++] = table[i];
		i++;
	}
	table[k] = 0;
	return (k);
}

int					ft_strcmp_percent(char *src, char *find)
{
	int				i;
	char			table[128];

	ft_bzero(table, sizeof(char) * 128);
	ft_cont_table(src, table, 0);
	ft_cont_table(find, table, 1);
	ft_cont_table(find, table, 0);
	i = ft_reinit_int_table(table);
	return (ft_round(ft_count_number(table, 2) * 100 / i));
}
