/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocDoubleChar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 17:27:48 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/26 17:27:57 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_allocDoubleChar(size_t size)
{
	char			**ecuatii;

	if (!(ecuatii = (char**)malloc(sizeof(char*) * size)))
		return (0);
	ft_initDoubleChar(ecuatii, size);
	return (ecuatii);
}
