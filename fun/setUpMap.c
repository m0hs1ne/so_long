/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setUpMap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:29:21 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:37:58 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	read_map(char *map, t_data *data)
{
	char	buff[2];
	int		size;
	int		fd;

	data->saved = NULL;
	fd = open(map, O_RDONLY);
	size = 1;
	if (fd < 0)
		return (0);
	while (size)
	{
		size = read(fd, buff, 1);
		if (size == -1)
			return (0);
		buff[size] = '\0';
		data->saved = ft_strjoin(data->saved, buff);
	}
	close(fd);
	data->map = ft_split(data->saved, '\n');
	return (1);
}

void	set_column(char	*str, t_data	*data)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		data->column++;
		i++;
	}
}

void	set_line(char	*str, t_data	*data)
{
	int	i;

	i = 0;
	data->line++;
	while (str[i])
	{
		if (str[i] == '\n')
			data->line++;
		i++;
	}
}

int	set_up_map(char	*map, t_data	*data)
{
	if (!read_map(map, data))
		return (0);
	set_line(data->saved, data);
	set_column(data->saved, data);
	return (1);
}
