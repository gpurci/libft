/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_five_concat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 13:17:14 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 14:17:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_str_five_concat(char *one, char *two, char *three,
	char *forth, char *five)
{
	char			*nou;

	if (!one && !two && !three && !forth && !five)
		return (0);
	if (!one)
		one = "";
	if (!two)
		two = "";
	if (!three)
		three = "";
	if (!forth)
		forth = "";
	if (!five)
		five = "";
	if (!(nou = (char*)malloc(sizeof(char) * (ft_strlen(one) + ft_strlen(two) +
		ft_strlen(three) + ft_strlen(forth) + ft_strlen(five) + 1))))
		return (0);
	ft_strcpy(nou, one);
	ft_strcpy(nou + ft_strlen(nou), two);
	ft_strcpy(nou + ft_strlen(nou), three);
	ft_strcpy(nou + ft_strlen(nou), forth);
	ft_strcpy(nou + ft_strlen(nou), five);
	return (nou);
}
