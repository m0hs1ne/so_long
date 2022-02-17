/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:50:35 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 13:57:56 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!(ptr))
		return (NULL);
	ft_memcpy(ptr, s, i);
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strs_len;
	char	**ptr;

	if (!s)
		return (NULL);
	strs_len = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (strs_len + 1));
	if (!(ptr))
		return (NULL);
	i = -1;
	while (++i < strs_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = init_str(s, c);
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
