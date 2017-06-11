/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswich.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:08:39 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 17:08:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_strswich(char *s, char corectat, char corector)
{
	while (*s)
	{
		s = ft_strchr(s, corectat);
		if (!s)
			return;
		*s = corector;
		s++;
	}
}
