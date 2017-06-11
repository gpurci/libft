/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afisareTwoDchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 05:43:48 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 05:43:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void			afisareTwoDchar(char **c)
{
	int			i;

	i = 0;
	printf("afisareTwoDchar+++++++++++++++++++++++++++\n");
	if (!c)
	{
		printf("afisareTwoDchar++++++++nu exista dublu char\n");
		return ;
	}
	printf("addres ecuatii = %p\n", c);
	while (c[i])
	{
		printf("var = $%s$\n", c[i]);
		i++;
	}
	printf("afisareTwoDchar-------------------------------\n");
	printf("afisareTwoDchar------------------del+++++++++\n");
}
