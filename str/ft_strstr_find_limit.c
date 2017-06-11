/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_find_limit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:49:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 15:49:59 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr_find_limit(char *str, char *find, int n)
{
	int j;

	if (find[0] == '\0' || !find)
		return (str);
	n--;
	while (*str != '\0')
	{
		j = 0;
		while (find[j] == str[j] && str[j])
		{
			if (j == n)
				return (str);
			j++;
		}
		str++;
	}
	return (0);
}
