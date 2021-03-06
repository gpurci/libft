/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strClrDel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:20:41 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/26 18:20:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strClrDel(char **src)
{
	int				i;

	i = 0;
	if (!*src)
		return ;
	while ((*src)[i] != '\0')
	{
		(*src)[i] = 0;
		i++;
	}
	free(*src);
	*src = 0;
}
