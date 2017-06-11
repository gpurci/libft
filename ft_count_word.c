/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 18:00:46 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/05 18:00:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_count_word(char *src, char *word)
{
	int				k;

	k = 0;
	while (*src)
	{
		if ((src = ft_strstr_find_limit(src, word, ft_strlen(word))))
			k++;
		else
			return (k);
		src++;
	}
	return (k);
}
