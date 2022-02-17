/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayMap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:12:00 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/15 19:18:20 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	map_elements(t_data *data)
{
	data->mlx_win = mlxnw(data, "so_long");
	data->wall = pxpm(data, "sprites/wall.xpm");
	data->door1 = pxpm(data, "sprites/door_01.xpm");
	data->door2 = pxpm(data, "sprites/door_02.xpm");
	data->enemy1 = pxpm(data, "sprites/enemy_01.xpm");
	data->enemy2 = pxpm(data, "sprites/enemy_02.xpm");
	data->floor = pxpm(data, "sprites/floor.xpm");
	data->heart1 = pxpm(data, "sprites/heart1.xpm");
	data->heart2 = pxpm(data, "sprites/heart2.xpm");
	data->player1 = pxpm(data, "sprites/player_01.xpm");
	data->player2 = pxpm(data, "sprites/player_02.xpm");
	fill_win(data);
}

int	motion(t_data *data)
{
	data->i++;
	if (data->i > 10000)
		data->i = 0;
	if (data->i == 2000)
		set_motion(data, data->heart1, 'C');
	if (data->i == 3000)
		set_motion(data, data->player1, 'P');
	if (data->i == 4000)
		set_motion(data, data->enemy1, 'M');
	if (data->i == 6000)
		set_motion(data, data->heart2, 'C');
	if (data->i == 7000)
		set_motion(data, data->player2, 'P');
	if (data->i == 8000)
		set_motion(data, data->enemy2, 'M');
	return (0);
}

int	key_code(int keycode, t_data *data)
{
	char	*s;

	pimg(data, data->floor, 1, 1);
	s = ft_itoa(data->moves_counter);
	mlx_string_put(data->mlx, data->mlx_win, 25, 20, 0x33C1FF, s);
	write(1, "\033[1;30mMoves=====>", 19);
	write(1, s, ft_strlen(s));
	write(1, "\n\033[0m", 6);
	free(s);
	if (keycode == 126 || keycode == 13)
		p_move(data, 'u');
	if (keycode == 125 || keycode == 1)
		p_move(data, 'd');
	if (keycode == 123 || keycode == 0)
		p_move(data, 'l');
	if (keycode == 124 || keycode == 2)
		p_move(data, 'r');
	if (keycode == 53)
		exit (0);
	return (0);
}

void	display_map(t_data *data)
{
	data->mlx = mlx_init();
	map_elements(data);
	mlx_loop_hook(data->mlx, motion, data);
	mlx_hook(data->mlx_win, 17, 1, ft_close, data);
	mlx_hook(data->mlx_win, 2, 0, key_code, data);
	mlx_loop(data->mlx);
}
