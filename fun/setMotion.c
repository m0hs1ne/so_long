/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setMotion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:02:59 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:52:28 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_motion(t_data *data, void *img, int c)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->line)
	{
		j = -1;
		while (++j < data->column)
		{
			if (data->map[i][j] == c)
			{
				pimg(data, data->floor, j * 64, i * 64);
				pimg(data, img, j * 64, i * 64);
			}
		}
	}
}
