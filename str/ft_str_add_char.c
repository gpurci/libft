/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 18:07:35 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 18:07:36 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>///////////
char			*ft_str_add_char(char *src, char car)
{
	char 		*nou;
	int			k;

	k = ft_strlen(src);
	if (!(nou = (char*)malloc(sizeof(char) * (k + k + 2))))
		return (0);
	nou[k + k + 1] = 0;
	//printf("ft_str_add_char = $%s$ car = %d k = %d\n", src, car, k);
	while (k > 0)
	{
		nou[k + k] = car;
		k--;
		nou[k + k + 1] = src[k];
		//printf("nou = $%d$ nou = $%d$ k = %d\n", nou[k + k + 1], nou[k + k + 2], k);
	}
	*nou = car;
	// printf("nou = $%d$ nou = $%d$ k = %d\n", *nou, nou[1], k);
	// printf("ft_str_add_char = $%s$\n", src);
	// printf("ft_str_add_char nou = $%s$\n", nou);
	ft_strClrDel(&src);
	return (nou);
}
