/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 20:46:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/07 20:46:06 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match_ptr(char *s1, char *s2, char **ptr, int mch)
{
	if (*s2 == mch)
	{
		if (*(s2 + 1) == mch || *s1 == 0)
			return (match_ptr(s1, s2 + 1, ptr, mch));
		if (*s1 == *(s2 + 1))
		{
			if (!*ptr)
				*ptr = s1;
			if (!(match_ptr(s1, s2 + 1, ptr, mch)))
				return (match_ptr(s1 + 1, s2, ptr, mch));
			return (1);
		}
		return (match_ptr(s1 + 1, s2, ptr, mch));
	}
	if (*s1 == *s2)
	{
		if (*s2 != 0)
			return (match_ptr(s1 + 1, s2 + 1, ptr, mch));
		return (1);
	}
	*ptr = 0;
	return (0);
}
