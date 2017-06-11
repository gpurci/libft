/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswich_string_del.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 20:50:49 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/14 20:50:50 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strswich_string_del(char **nume, char *vechi, char *nou)
{
	char			*del;

	del = *nume;
	*nume = ft_strswich_string(del, vechi, nou);
	if (del != *nume)
		ft_strClrDel(&del);
	return (*nume);
}
