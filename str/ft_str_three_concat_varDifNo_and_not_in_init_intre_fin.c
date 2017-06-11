/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strConcatTreiStr_varDifNo.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 19:14:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/26 19:15:03 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strConcatTreiStr_varDifNo(char *init, char *var,
	char *fin, char no)
{
	char			*del;
	char			*find;
	
	if (!init | !var | !fin)
		return (init);
	if (!init)
		init = fin;
	del = init;
	find = ft_strstr(init, fin);
	if (find != init)
		init = ft_strjoin(fin, init);
	if (init != del)
	{
		ft_strClrDel(&del);
		del = init;
	}
	if (*var != no)
	{
		find = ft_strstr(init, var);
		if (!find || *(find - 1) != ',')
			if (!(init = ft_str_three_concat(del, var, fin)))
			{
				ft_strClrDel(&del);
				return (0);
			}
	}
	if (init != del)
		ft_strClrDel(&del);
	return (init);
}
