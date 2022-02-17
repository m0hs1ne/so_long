/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapChecker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:01:53 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:06:01 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	char_check(t_data	*data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] != '1' && data->map[i][j] != '0'
					&& data->map[i][j] != 'C'
					&& data->map[i][j] != 'P'
					&& data->map[i][j] != 'E'
					&& data->map[i][j] != 'M')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	wall_check2(t_data	*data)
{
	int	start;
	int	end;

	end = data->column - 1;
	start = 1;
	while (start < data->line - 1)
	{
		if (data->map[start][0] != '1' || data->map[start][end] != '1')
			return (0);
		start++;
	}
	return (1);
}

int	wall_check(t_data	*data)
{
	int	i;
	int	line;

	line = data->line - 1;
	i = 0;
	while (data->map[0][i])
	{
		if (data->map[0][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (data->map[line][i])
	{
		if (data->map[line][i] != '1')
			return (0);
		i++;
	}
	return (1);
}

void	map_check(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
			j++;
		if (j != data->column)
			yellow_color("ur map need to be in a good shape");
		i++;
	}
	if (wall_check(data) == 0)
		yellow_color("fix ur wall");
	if (wall_check2(data) == 0)
		yellow_color("fix ur wall");
	if (char_check(data) == 0)
		yellow_color("there is a new char fix ur map");
}
