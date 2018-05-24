/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:07:37 by rastle            #+#    #+#             */
/*   Updated: 2018/05/24 12:47:56 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place(t_list *list, t_mino *mino, int x, int y)
{

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
	while (y < piece->height)
	{
		x = 0;
		while (x < piece->width)
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

int		roundup_sqrt()
{
	//find sqrt rounded to higher square
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
