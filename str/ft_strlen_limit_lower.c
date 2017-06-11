/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_limit_lower.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:40:01 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/11 16:40:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlen_limit_lower(const char *str, char c)
{
	size_t			i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] < c && str[i] != '\0')
		i++;
	return (i);
}
