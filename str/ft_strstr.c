/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:53:30 by gpurci            #+#    #+#             */
/*   Updated: 2016/11/21 16:28:42 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(char *str, char *find)
{
	int j;

	if (find[0] == '\0' || !find || !str)
		return (str);
	while (*str != '\0')
	{
		j = 0;
		while (find[j] == str[j] && str[j])
		{
			if (find[j + 1] == '\0')
				return (str);
			j++;
		}
		str++;
	}
	return (0);
}
