/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charCond.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:48:44 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:22:56 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	char_cond(t_data *data)
{
	if (data->p_count == 0)
		yellow_color("u need player in ur map");
	if (data->p_count > 1)
		yellow_color("u need just one player");
	if (data->e_count == 0)
		yellow_color("u need at least one exit in ur map");
	if (data->coins_counter == 0)
		yellow_color("u need at least one collective item in ur map");
}
