/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_two_concat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 15:10:08 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/09 15:10:10 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_str_two_concat(char *init, char *fin)
{
	char			*standart;

	if (!init && !fin)
		return (0);
	if (!init)
		init = "";
	if (!fin)
		fin = "";
	if (!(standart = (char*)malloc(sizeof(char) * (ft_strlen(init) +
		ft_strlen(fin) + 1))))
		return (0);
	ft_strcpy(standart, init);
	ft_strcpy(standart + ft_strlen(standart), fin);
	return (standart);
}
