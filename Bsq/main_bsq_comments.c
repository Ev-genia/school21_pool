/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:07:43 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/14 16:42:40 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//проверка символов, символы должны быть разными
void	ft_valid_symb(t_char *sett_map)
{
	if (sett_map->full == sett_map->obstacle
		|| sett_map->full == sett_map->empty
		|| sett_map->obstacle == sett_map->empty)
	{
		write(2, "Map is not valid: symbols must be different.\n", 45);
		//?фукция по освобождению памяти строк карты и первой строки
		return ;
	}
}

//проверка карты на валидность по длинам строк
void	ft_valid_srtlen(int j, int len_str)
{
    if (len_str != j)
	{
		write(2, "Map is not valid: different length of string.\n", 46);
		//?фукция по освобождению памяти строк карты и первой строки
		return ;
	}
}

//проверка карты на валидность по количеству строк и полей
void	ft_valid_map_exist(int k, int j)
{
	if (k == 0 || j == 0)
	{
		write(2, "Map is not valid: empty string or empty line.\n", 46);
		//?фукция по освобождению памяти строк карты и первой строки
		return ;
	}
}

//проверка на валидность содержания первой строки, 
//получение количества строк в карте
int	ft_valid_first_string(char *str_first)
{
	int		i;
	int		len;
	int		p;
	int		count_string;

	i = 0;
	while (str_first[i++]);
	len = i - 5;
	i = 0;
	while (str_first[i] >= '0' && str_first[i] <= '9' && i <= len)
		i++;
	if (i != len)
	{
		write(2, "Map not valid. First string error.\n", 35);
		//фукция по освобождению памяти длиной (len + 3)
		return (0);
	}
	p = 1;
	count_string = 0;
	while (len-- > 0)
	{
		count_string = (str_first[len] - '0') * p + count_string;
		p = p * 10;
	}
	return (count_string);
}

//получение длины первой строки
int	ft_str_len_first(char *argv)
{
	int		fd;
	int		i;
	char	symb;

	fd = open(argv, O_RDONLY);
	i = 0;
	while (read(fd, &symb, 1) != 0 && symb != '\n')
		i++;
	close(fd);
	return (i);
}

//запись первой строки из файла, получение валидных символов, 
//выделение памяти под первую строку
void	ft_first_string(char *argv, char **str_first, t_char *sett_map)	
{		
	int		fd;
	int		ret;
	int		i;
	char	symb;

	fd = open(argv, O_RDONLY);
	ret = read(fd, &symb, 1);
	i = 0;
	*str_first = (char *)malloc(sizeof(char) * (ft_str_len_first(argv) + 1));
	if (*str_first == NULL)
		return ;
	while (ret != 0 && symb != '\n')
	{
		(*str_first)[i] = symb;
		i++;
		ret = read(fd, &symb, 1);
	}
    (*str_first)[i] = '\n';
	sett_map->full = (*str_first)[i - 1];
	sett_map->obstacle = (*str_first)[i - 2];
	sett_map->empty =(*str_first)[i - 3];
	ft_valid_symb(sett_map);
	return ;
}

//проверка файла на возможность прочтения
void	ft_check_read(char *argv)
{
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
}

//получение длины строки карты
int	ft_str_len(char *argv)
{
	int		fd;
	int		i;
	char	symb;

	fd = open(argv, O_RDONLY);
	while (read(fd, &symb, 1) != 0 && symb != '\n');
	i = 0;
	while (read(fd, &symb, 1) != 0 && symb != '\n')
		i++;
	close(fd);
	return (i);
}

//проверка символа карты на валидность по содержанию
int	ft_valid_firststring_noempty(char symb, t_char *sett_map)
{
    
	if (symb != sett_map->empty && symb != sett_map->obstacle && symb != sett_map->full)
    
        
		return (1);
	return (0);
}

//проверка всей карты на валидность по содержанию
void	ft_valid_map_symbol(char **map, t_char *sett_map)
{
	int	i;
	int	j;
	int	k;
	i = -1;
	k = 0;
	while (++i < sett_map->count_string)
	{
		j = -1;
		while (++j < sett_map->count_column)
		{
			if (ft_valid_firststring_noempty(map[i][j], sett_map))
            	k++;
        }
	}
	if (k != 0)
	{
		write(2, "Map in not valid: unacceptable symbols.\n", 40);
		//функция очистки памяти
	}
}

//получение массива карты
void	ft_mass(char *argv, char ***map, t_char *sett_map)
{
	int		fd;
	int		k;
	int		j;
	char	symb;

	fd = open(argv, O_RDONLY);
	while (read(fd, &symb, 1) != 0 && symb != '\n');
	k = -1;
	read(fd, &symb, 1);
	while (++k < sett_map->count_string)
	{
        j = -1;
		(*map)[k] = (char *)malloc(sizeof(char) * (sett_map->count_column + 1));
		while (++j < sett_map->count_column)
		{	
			(*map)[k][j] = symb;
			read(fd, &symb, 1);
		}
       // (*map)[k][j] = '\0';
		read(fd, &symb, 1);//прочитываю символ переноса строки
        ft_valid_srtlen(j, sett_map->count_column);
	}
    ft_valid_map_exist(--k, j);
	ft_valid_map_symbol(*map, sett_map);
	close(fd);
}

//чтение карты на стандартном вводе
char	*ft_new_map(void)//char **map_name)
{
    int		fd;
	char	buf;
    char	*map_name;

	//buf = NULL;
	map_name = "map.txt";
	fd = open(map_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	while (read(0, &buf, 1))
		write(fd, &buf, 1);
    close(fd);
	return (map_name);
}

//проверка валидности карты по количеству строк
void	ft_valid_num_str(char *argv, int len)
{
	int		fd;
	int		k;
	char	symb;

	fd = open(argv, O_RDONLY);
	while (read(fd, &symb, 1) != 0 && symb != '\n');
	read(fd, &symb, 1);
	k = 0;
	while (read(fd, &symb, 1) != 0)
	{
		if (symb == '\n')	
			k++;
	}
	if (k != len)
	{
		write(2, "Map is not valid. Different number of strings.\n", 47);
		return ;
	}
}

void	ft_free(char **obj, int i)
{
	int	j;

	j = 0;
	while (j < i)
		free(obj[j++]);
	free(obj);
}



void	main_functions(char *file_name, char **map)
{
	char	*str_first;
	t_char	sett_map;

	str_first = NULL;
	ft_check_read(file_name);//проверка файла на возможность прочтения

    ft_first_string(file_name, &str_first, &sett_map);
	sett_map.count_string = ft_valid_first_string(str_first);
	sett_map.count_column = ft_str_len(file_name);
	ft_valid_num_str(file_name, sett_map.count_string);
	map = (char **)malloc(sizeof(char *) * sett_map.count_string);
	if (map == NULL)
		return ;
	ft_mass(file_name, &map, &sett_map);//получение массива карты
   // ft_draw_max_square(map, &sett_map);
	ft_free(map, sett_map.count_string);
	free(str_first);
}


int	main(int argc, char **argv)
{
    char	**map;
    char	*map_name;
	int		i;

    map = NULL;
	if (argc == 1)
	{
		map_name = ft_new_map();
		main_functions(map_name, map);
	}
	i = 1;
	if (argc >= 2)
		while (i < argc)
		{
			main_functions(argv[i], map);
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
            while (1)
            {}
		}
}
