/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:53:15 by rastle            #+#    #+#             */
/*   Updated: 2018/05/10 17:00:38 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


void	check_pieces()
{
	//check if tetrominoes are valid
	// single character nothing adjacent
	// 6 connected sides between 4 blocks
}

void	check_file()
{
	// check if file input is valid
}

int		main(int argc, char** argv)
{
	int fd;
	int ret;
	char *buf;
	
	if (argc != 2)
	{
		write(1, "error\n", 6);
		exit(0);
	}
	if ((fd = open(argv[1], O_READONLY) < 0)
	//read file
		return (0);
	close(fd);
}
