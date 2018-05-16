/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:55:31 by rastle            #+#    #+#             */
/*   Updated: 2018/05/16 14:58:51 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//function to map input to tetrimino
//
//function to create aa board
//
//
t_list		map_tetri(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '.')
		{
			list[i] = 0;
			i++;
		}
		else if (str[i] == '#')
		{
			list[i] = 1;
			i++;
		}
		else 
		{
			i++;
		}
	}
}
