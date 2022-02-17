/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlxFun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:15:44 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 12:58:04 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	pimg(t_data *data, void *img, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win, img, x, y);
}

void	*pxpm(t_data *data, char *path)
{
	void	*ptr;

	ptr = mlx_xpm_file_to_image(data->mlx, path,
			&data->w, &data->h);
	return (ptr);
}

void	*mlxnw(t_data *data, char *title)
{
	void	*ptr;

	ptr = mlx_new_window(data->mlx, data->column * 64,
			data->line * 64, title);
	return (ptr);
}
