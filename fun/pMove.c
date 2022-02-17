/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pMove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:04:12 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:08:41 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	p_move(t_data *data, int cond)
{
	if (cond == 'u')
		up_move(data);
	if (cond == 'l')
		left_move(data);
	if (cond == 'd')
		down_move(data);
	if (cond == 'r')
		right_move(data);
	return (0);
}
