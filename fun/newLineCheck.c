/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newLineCheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:49:16 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:33:15 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	new_line_checker(t_data	*data)
{
	int	i;

	i = 0;
	if (data->saved[0] != '1')
		return (0);
	while (data->saved[i] != '\0')
	{
		if (data->saved[i] == '\n' && data->saved[i + 1] == '\n')
			return (0);
		if (data->saved[i] == '\n' && data->saved[i + 1] == '\0')
			return (0);
		i++;
	}
	return (1);
}
