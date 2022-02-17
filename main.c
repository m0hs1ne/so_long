/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:58:09 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/15 10:44:30 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_data	data;
	char	*map_path;

	map_path = av[1];
	if (ac != 2)
		return (0);
	if (!ft_strnstr(av[1], ".ber", ft_strlen(av[1])))
		yellow_color("ur map have a wrong extention");
	ini(&data);
	if (set_up_map(map_path, &data) == 0)
		yellow_color("fix ur map bruh");
	if (new_line_checker(&data) == 0)
		yellow_color("there is a new line in ur map");
	map_check(&data);
	data_count(&data);
	char_cond(&data);
	display_map(&data);
}
