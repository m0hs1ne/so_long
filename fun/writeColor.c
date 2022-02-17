/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeColor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:03:10 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:54:37 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	red_color(char *str)
{
	write(1, "\033[0;31m", 8);
	write(1, str, ft_strlen(str));
	write(1, "\033[0m", 5);
	exit (0);
}

void	green_color(char *str)
{
	write(1, "\033[0;32m", 8);
	write(1, str, ft_strlen(str));
	write(1, "\033[0m", 5);
	exit (0);
}

void	yellow_color(char *str)
{
	write(1, "\033[0;33m", 8);
	write(1, str, ft_strlen(str));
	write(1, "\033[0m", 5);
	exit (0);
}
