/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initDoubleChar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 21:24:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:12:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>///////////
void			ft_initDoubleChar(char **c, size_t len)
{
	size_t		i;

	printf("initDoubleChar===if===============\n");
	if (!*c)
		return ;
	printf("initDoubleChar===if===============\n");
	i = 0;
	while (i < len)
	{
		c[i] = 0;
		i++;
	}
	printf("initDoubleChar===sfirsit==============\n");
}
