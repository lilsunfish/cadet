/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:17:52 by rastle            #+#    #+#             */
/*   Updated: 2018/05/25 11:43:22 by rastle           ###   ########.fr       */
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

typedef struct	s_plot
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_mino
{
	char		**pos;
	int			w;
	int			h;
	char		mark;
}				t_mino;

t_list			*read_piece(int fd);
t_board			*newboard(int size);
void			printboard(t_board *board);
int				place(t_mino *mino, t_board *board, int x, int y);
void			set_piece(t_mino *mino, t_board *board, t_plot *plot, char c);
t_map			*solve(t_list *list);
t_plot			*newplot(int x, int y);
void			freeboard(t_board *board);
void			free_piece(t_mino *mino);
t_list			*free_list(t_list *list);
#endif

#endif
