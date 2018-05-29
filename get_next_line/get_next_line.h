/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:00:29 by rastle            #+#    #+#             */
/*   Updated: 2018/05/29 10:52:47 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFF_SIZE 32
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_gnl
{
	char		*ln;
	int			*pos;
}				t_gnl;

int		get_next_line(const int fd, char **line);

#endif
