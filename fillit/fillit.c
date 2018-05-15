/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 14:53:15 by rastle            #+#    #+#             */
/*   Updated: 2018/05/15 14:07:32 by rastle           ###   ########.fr       */
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


	buf = ft_strnew(21);	
	if (argc != 2)
	{
		write(1, "error\n", 6);
		exit(0);
	}
	if ((fd = open(argv[1], O_RDONLY) < 0)
		//return error
		return (0);
	while (ret = read(fd, buf, BUFF_SIZE))
	i
	close(fd);
}
