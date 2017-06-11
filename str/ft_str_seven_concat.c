/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_seven_concat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 21:52:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 21:54:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_str_seven_concat(char *one, char *two, char *three,
	char *forth, char *five, char *six, char *seven)
{
	char			*nou;

	if (!one && !two && !three && !forth && !five && !six && !seven)
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
	if (!six)
		six = "";
	if (!seven)
		seven = "";
	if (!(nou = (char*)malloc(sizeof(char) * (ft_strlen(one) + ft_strlen(two) +
		ft_strlen(three) + ft_strlen(forth) + ft_strlen(five) + ft_strlen(six) +
		ft_strlen(seven) + 1))))
		return (0);
	ft_strcpy(nou, one);
	ft_strcpy(nou + ft_strlen(nou), two);
	ft_strcpy(nou + ft_strlen(nou), three);
	ft_strcpy(nou + ft_strlen(nou), forth);
	ft_strcpy(nou + ft_strlen(nou), five);
	ft_strcpy(nou + ft_strlen(nou), six);
	ft_strcpy(nou + ft_strlen(nou), seven);
	return (nou);
}
