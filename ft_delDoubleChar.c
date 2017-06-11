/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delDoubleChar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 14:10:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:43:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>///////////
void			ft_delDoubleChar(char ***c)
{
	int			i;
printf("delDoubleChar addres = %p\n", *c);
	if (!*c)
		return ;
	i = 0;
	while (!*c[i])
	{
		ft_strClrDel(c[i]);
		i++;
	}
	free(**c);
	*c = 0;
}	
