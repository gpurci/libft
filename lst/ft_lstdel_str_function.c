/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_str_function.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:02:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:02:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>///////////
void				ft_lstdel_str_function(void *content, size_t content_size)
{
	//printf("ft_lstdel_str_function\n");
	ft_strClrDel((char**)&content);
	content_size = 0;
	//printf("ft_lstdel_str_function\n");
}
