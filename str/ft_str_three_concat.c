/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_three_concat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:31:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 13:17:33 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_str_three_concat(char *init, char *var, char *fin)
{
	char			*standart;

	if (!init && !var && !fin)
		return (0);
	if (!init)
		init = "";
	if (!var)
		var = "";
	if (!fin)
		fin = "";
	if (!(standart = (char*)malloc(sizeof(char) * (ft_strlen(var) + 
		ft_strlen(init) + ft_strlen(fin) + 1))))
		return (0);
	ft_strcpy(standart, init);
	ft_strcpy(standart + ft_strlen(init), var);
	ft_strcpy(standart + ft_strlen(standart), fin);
	return (standart);
}
