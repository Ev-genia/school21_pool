/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:29:11 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/14 23:46:34 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_char
{
	char	full;
	char	empty;
	char	obstacle;
	int		count_column;
	int		count_string;
}			t_char;

void	ft_valid_symb(t_char *sett_map);
void	ft_valid_srtlen(int j, int len_str);
void	ft_valid_map_exist(int k, int j);
void	ft_valid_string(char *map, t_char *sett_map);
int		ft_valid_first_string(char *str_first);
int		ft_str_len_first(char *argv);
void	ft_first_string(char *argv, char **str_first, t_char *sett_map);
void	ft_check_read(char *argv);
int		ft_str_len(char *argv);
int		ft_valid_firststring_noempty(char symb, t_char *sett_map);
void	ft_valid_map_symbol(char **map, t_char *sett_map);
void	ft_mass(char *argv, char ***map, t_char *sett_map);
char	*ft_new_map(void);
void	main_functions(char *file_name, char **map);
void	ft_valid_num_str(char *argv, int len);
void	ft_draw_max_square(char **map, t_char *sett_map);
void	ft_free(char **obj, int i);

#endif
