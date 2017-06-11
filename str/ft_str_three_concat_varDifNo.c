/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_three_concat_varDifNo.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 20:24:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 18:22:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				ft_str_three_concat_varDifNo(char **init, char *var,
	char *fin, char no)
{
	char			*del;
	
	del = *init;
	if (*var != no)
		if (!(*init = ft_str_three_concat(del, var, fin)))
		{
			ft_strClrDel(&del);
			return (0);
		}
	if (*init != del)
		ft_strClrDel(&del);
	return (1);
}
