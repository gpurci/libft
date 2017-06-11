/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_pozitiv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 13:51:08 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/17 13:51:10 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_str_pozitiv(char *src)
{
	while (*src)
	{
		if (*src < 0)
			*src = ~*src;
		src++;
	}
}
