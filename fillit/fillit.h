/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:17:52 by rastle            #+#    #+#             */
/*   Updated: 2018/05/15 13:06:31 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FILLIT_H
# define FILLIT_H
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft/libft.h"
typedef struct	s_board
{
	int			size;
	char		**array;
}				t_board;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_mino
{
	char		**pos;
	int			width;
	int			height;
	char		value;
}				t_mino;

int		check_file();

#endif
