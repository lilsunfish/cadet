/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:07:37 by rastle            #+#    #+#             */
/*   Updated: 2018/05/29 14:57:31 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place(t_mino *mino, t_board *board, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < mino->w)
	{
		j = 0;
		while (j < mino->h)
		{
			if (mino->pos[j][i] == '#' && board->array[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	write_piece(mino, board, newplot(x, y), mino->mark);
	return (1);	
}

void	write_piece( t_mino *mino, t_board *board, t_plot *plot, char c)
{
	int i;
	int j;

	i = 0;
	while (i < mino->w)
	{
		j = 0;
		while (j < mino->h)
		{
			if (mino->pos[j][i] == '#')
				board->array[plot->y + j][plot->x + i] = mark;
			j++;
		}
		i++;
	}
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
			while (place(piece, board, x, y))
			{
				if (solveboard(list->next, board))
						return (1);
				else
					write_piece(piece, board, newplot(x, y), '.');
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
