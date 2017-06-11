/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrDoubleChar_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:02:39 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 14:10:55 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putstrDoubleChar_fd(char **c, int fd)
{
	int				len;

	if (!c)
		return ;
	len = 0;
	while (c[len])
	{
		ft_putstr_fd(c[len], fd);
		len++;
	}
}
