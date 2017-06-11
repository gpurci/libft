/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strClrDelThree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 17:30:27 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/17 17:30:30 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strClrDelThree(char **ptr1, char **ptr2, char **ptr3)
{
	ft_strClrDel(ptr1);
	ft_strClrDel(ptr2);
	ft_strClrDel(ptr3);
}
