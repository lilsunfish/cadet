/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:02:50 by rastle            #+#    #+#             */
/*   Updated: 2018/05/29 12:52:59 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *str)
{
	char	buf[BUFF_SIZE + 1];
	int		r;
	
	if (fd < 0 || read(fd, buf, 0) < 0 || BUFF_SIZE < 1)
		return (0);
	if (str == NULL)

}

int get_next_line(const int fd, char **line)
{
	static char	*str;
	t_gnl		*file;

	if (!(str = read_file(fd, str)) || !line)
	{
		return (-1);
	}
	if ((file->ln = ft_strchr(str, '\n')) > 0)


			return (r);
}
