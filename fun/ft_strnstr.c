/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:59:52 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:58:27 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && j + i < len
			&& str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&((char *)str)[i]);
		i++;
	}
	return (NULL);
}
