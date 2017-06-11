/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:07:28 by gpurci            #+#    #+#             */
/*   Updated: 2016/11/21 15:31:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t n)
{
	char *aloc;

	n++;
	aloc = (char*)(malloc(sizeof(char) *n));
	if (aloc != 0)
		return (ft_memset(aloc, 0, n));
	return (NULL);
}
