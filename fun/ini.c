/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ini.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:18:38 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:23:27 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ini(t_data *data)
{
	data->coins_counter = 0;
	data->p_count = 0;
	data->e_count = 0;
	data->moves_counter = 0;
	data->line = 0;
	data->counter = 0;
	data->column = 0;
	data->i = 0;
}
