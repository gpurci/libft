/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_realloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:23:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/12 16:23:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 				*ft_strdup_realloc(char *src)
{
	char 			*c;

	c = ft_strdup(src);
	ft_str_clear_and_delete(src);
	return (c);
}
