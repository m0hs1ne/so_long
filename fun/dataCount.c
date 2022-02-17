/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataCount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:44 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:22:56 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	data_count(t_data	*data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'C')
				data->coins_counter++;
			if (data->map[i][j] == 'P')
				data->p_count++;
			if (data->map[i][j] == 'E')
				data->e_count++;
			j++;
		}
		i++;
	}
}
