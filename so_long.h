/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <mel-hada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:15:46 by mel-hada          #+#    #+#             */
/*   Updated: 2022/02/12 14:29:00 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <mlx.h>

typedef struct data
{
	void	*mlx;
	void	*mlx_win;
	int		h;
	int		w;
	int		p1;
	int		p2;
	int		p;
	int		counter;
	char	*saved;
	int		coins_counter;
	int		p_count;
	int		e_count;
	int		moves_counter;
	int		line;
	int		column;
	int		i;
	char	**map;
	int		*dir;
	void	*door1;
	void	*door2;
	void	*wall;
	void	*enemy1;
	void	*enemy2;
	void	*floor;
	void	*heart1;
	void	*heart2;
	void	*player1;
	void	*player2;
}	t_data;

void	ini(t_data *data);
void	error(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		new_line_checker(t_data	*data);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int		ft_strlen(char *str);
char	**ft_split(char const *s, char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	char_cond(t_data *data);
void	ini(t_data *data);
void	map_check(t_data *data);
int		set_up_map(char *map, t_data *data);
void	data_count(t_data	*data);
void	pimg(t_data *data, void *img, int x, int y);
void	*pxpm(t_data *data, char *path);
void	*mlxnw(t_data *data, char *title);
void	display_map(t_data *data);
void	set_motion(t_data *data, void *img, int c);
char	*fill_win(t_data	*data);
void	put_win(t_data	*data, int i, int j);
char	p_move(t_data *data, int cond);
char	up_move(t_data	*data);
void	put_player(t_data	*data);
void	put_player2(t_data	*data);
int		ft_close(void);
char	left_move(t_data	*data);
char	down_move(t_data	*data);
char	right_move(t_data	*data);
void	red_color(char *str);
void	green_color(char *str);
void	yellow_color(char *str);
char	*ft_itoa(int n);
#endif
