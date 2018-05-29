/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:07:37 by rastle            #+#    #+#             */
/*   Updated: 2018/05/29 14:00:13 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place(t_list *list, t_mino *mino, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < mino->h)
	{
		j = 0;
		while (j < mino->w)
		{
			if ()
				return (0);
			j++;
		}
		i++;
	}
	write_piece(list, mino, newplot(x, y), mino->mark);
	return (1);	
}

void	write_piece(t_list *list, t_mino *mino, t_plot *plot, char c)
{
}

int		solveboard(t_list *list, t_board *board)
{
	int x;
	int y;
	t_mino *piece;

	y = 0;
	piece = (t_mino *)list->content;
	while (y < piece->h)
	{
		x = 0;
		while (x < piece->w)
		{
			while (place(list, piece, x, y))
			{
				if (solveboard(list->next, board))
						return (1);
				else
					write_piece(list, piece, newplot(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		roundup_sqrt(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
		i++;
	return (i)
}

int		solve(t_list *list)
{
	t_board *board;
	int		size;
	
	size = roundup_sqrt//countlst(list) * 4);
	board = new_board(size);
	while (!solveboard(list, board))
	{
		size++;
		boardfree(board);
		board = new_board(size);
	}
	return (board);
}
