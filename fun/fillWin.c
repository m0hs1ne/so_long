/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillWin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:11:16 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:56:57 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*fill_win(t_data	*data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			put_win(data, i, j);
			if (data->map[i][j] == 'M')
			{
				pimg(data, data->enemy1, j * 64, i * 64);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	put_win(t_data	*data, int i, int j)
{
	if (data->map[i][j] == '1')
		pimg(data, data->wall, j * 64, i * 64);
	else if (data->map[i][j] != '1')
		pimg(data, data->floor, j * 64, i * 64);
	if (data->map[i][j] == 'C')
		pimg(data, data->heart1, j * 64, i * 64);
	if (data->map[i][j] == 'E')
		pimg(data, data->door1, j * 64, i * 64);
	if (data->map[i][j] == 'P')
	{
		data->p1 = i;
		data->p2 = j;
		pimg(data, data->player1, j * 64, i * 64);
	}
}
