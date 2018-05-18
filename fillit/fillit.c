/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:53:15 by rastle            #+#    #+#             */
/*   Updated: 2018/05/17 10:50:15 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


void	check_pieces()
{
	//check if tetrominoes are valid
	// single character nothing adjacent
	// 6 connected sides between 4 blocks
}

t_list	read_pieces(int fd)
{
	char *buf;
	int ret;
	t_list *list;
	t_mino *mino;
	char mark;

	buf = ft_strnew(21)	// check if file input is valid
	list = NULL;
	mark = 'A';
	while (ret = read(fd, buf, 21) >= 20)
	{
		//if ((check_mino(buf, ret) == 0) || mino = get_mino(buf, mark++) == NULL)
		{
			//free mems
		//error out
		}
		//addtolist///new t_mino 
		//free mems
	}
	//free buf
	//check ret
	//non zero return lstfree

}
		 
	}

	// valid file has 4 lines and then one new line
}

int		main(int argc, char** argv)
{

	t_list *lst;
	t_board *board;

	if (argc != 2)
	{
		write(1, "usage: ./fillit input_file\n", 27);
		return (1);
	}
	if ((lst = read_pieces(open(argv[1], O_RDONLY))) == NULL)
	{
		write(1, "error\n", 6);
		return (1);
	}
	board = solve(lst);
	printboard(board);
	boardfree(board);
	lstfree(lst);
	close(fd);
}
