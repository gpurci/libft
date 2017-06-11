/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_nou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 20:59:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/07 20:59:26 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>///////////
int					match_nou(char *s1, char *s2, int mch)
{
	//printf("s1 = $%s$ s2 = $%s$\n", s1, s2);
	if (*s2 == mch)
	{
		if (*(s2 + 1) == mch || *s1 == 0)
			return (match_nou(s1, s2 + 1, mch));
		if (*s1 == *(s2 + 1))
		{
			if (match_nou(s1, s2 + 1, mch))
				return (1);
			return (match_nou(s1 + 1, s2, mch));
		}
		return (match_nou(s1 + 1, s2, mch));
	}
	if (*s1 == *s2)
	{
		if (*s2 != 0)
			return (match_nou(s1 + 1, s2 + 1, mch));
		return (1);
	}
	return (0);
}
