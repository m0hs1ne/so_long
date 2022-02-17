/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rightMove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 08:21:54 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:23:27 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_player_r(t_data	*data)
{
	data->map[data->p1][data->p2] = '0';
	pimg(data, data->floor, data->p2 * 64, data->p1 * 64);
	data->p2++;
	data->p = 1;
	pimg(data, data->floor, data->p2 * 64, data->p1 * 64);
	pimg(data, data->player1, data->p2 * 64, data->p1 * 64);
}

void	put_player_r2(t_data	*data)
{
	pimg(data, data->floor, data->p2 * 64, data->p1 * 64);
	data->map[data->p1][data->p2] = '0';
	data->p2++;
	if (data->map[data->p1][data->p2] == 'M')
		red_color("Game over\nGG good luck next time");
	data->map[data->p1][data->p2] = 'P';
	data->p = 1;
	pimg(data, data->player1, data->p2 * 64, data->p1 * 64);
	data->moves_counter++;
}

char	right_move(t_data	*data)
{
	if (data->map[data->p1][data->p2 + 1] == '1')
		return (0);
	else if (data->map[data->p1][data->p2 + 1] == 'E')
	{
		if (data->coins_counter == data->counter)
			green_color("You Win bruh");
	}
	else if (data->map[data->p1][data->p2 + 1] == 'C')
	{
		put_player_r(data);
		data->map[data->p1][data->p2] = 'P';
		data->counter++;
		data->moves_counter++;
	}
	else
		put_player_r2(data);
	return (0);
}
