/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 18:06:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 18:07:52 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ver_gnl(char *c)
{
	char			*addres;

	if ((addres = ft_strchr(c, 10)))
	{
		*addres = '\0';
		return (1);
	}
	return (0);
}

char				*gnl_strjoin(char *s)
{
	int				i;
	char			*dest;

	i = ft_strlen(s);
	if (!(dest = ft_strnew(i + 1)))
		return (0);
	ft_strcpy(dest, s);
	return (dest);
}

int					gnl_init(char **list, char **line)
{
	char			*buf;

	if (!*list)
		if (!(*list = ft_strdup("\0")))
			return (-1);
	if (ver_gnl(*list))
	{
		if (!(*line = ft_strdup(*list)))
			return (-1);
		buf = *list;
		if (!(*list = gnl_strjoin(*list + ft_strlen(*list) + 1)))
			return (-1);
		ft_strclr(buf);
		ft_strdel(&buf);
		return (1);
	}
	return (2);
}

int					gnl_finish(char **list, char **line, char *buf, int ret)
{
	int				i;

	if (!(*line = ft_strdup(*list)))
		return (-1);
	ft_strclr(*list);
	ft_strdel(list);
	if (ret > (i = (int)ft_strlen(buf)))
		if (!(*list = gnl_strjoin(buf + i + 1)))
			return (-1);
	if (ret > 0 || (ret == 0 && **line != '\0'))
		ret = 1;
	ft_strclr(buf);
	return (ret);
}

int					get_next_line(int const fd, char **line)
{
	int				ret;
	int				i;
	static char		*list[1024];
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || fd > 1024 || !line)
		return (-1);
	if ((i = gnl_init(&list[fd], line)) != 2)
		return (i);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		i = ver_gnl(buf);
		*line = list[fd];
		if (!(list[fd] = ft_strjoin(list[fd], buf)))
			return (-1);
		ft_strclr(*line);
		ft_strdel(line);
		if (i == 1)
			break ;
	}
	if (ret == -1)
		return (-1);
	return (gnl_finish(&list[fd], line, buf, ret));
}
