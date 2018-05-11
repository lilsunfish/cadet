/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:02:50 by rastle            #+#    #+#             */
/*   Updated: 2018/05/11 13:53:19 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	static char	buf[BUFF_SIZE + 1];
	int		r;


	if (fd < 0 || !line)
		//error handle	
	
	r = read(fd, buf, BUFF_SIZE);
	return (r);
}
