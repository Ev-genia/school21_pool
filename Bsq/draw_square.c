/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:44:29 by wcollen           #+#    #+#             */
/*   Updated: 2021/07/14 23:01:50 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdlib.h>
#include<stdio.h>
#include "ft_list.h"
//#include <strings.h>

int find_min_value(int a, int b, int c)
{
	int i;
	i = 0;
	if(a <= b && a <= c)
		i = a;
	if(b <= a && b <= c)
		i = b;
	if(c <=a && c <= b)
		i = c;
	return (i);
}

void fill_coordinates(int **max_coordinates, int value, int i, int j)
{

	if((*max_coordinates)[0] < value)
	{
		(*max_coordinates)[0] = value;
		(*max_coordinates)[1] = i;
		(*max_coordinates)[2] = j;
	}

//printf("max_coord0: %d\n", (*max_coordinates)[0]);
//printf("max_coord1: %d\n", (*max_coordinates)[1]);
//printf("max_coord2: %d\n", (*max_coordinates)[2]);
}

void	make_substacle_matrix(char **map, int ***matrix, t_char *sett_map, int **max_coordinates)
{
	int	i;
	int	j;
//	printf("TEST42");
	i = -1;
    (*max_coordinates)[0] = 0;
    (*max_coordinates)[1] = 0;
    (*max_coordinates)[2] = 0;
	while (++i < sett_map->count_string)
	{
		j = -1;

	//printf("TEST33\n");	
		while (++j < sett_map->count_column)
		{
		
	//printf("TEST33\n");	
			if(i == 0 || j == 0)
			{

	//printf("i=%d j=%d\n", i,j);	
				if(map[i][j] != sett_map->obstacle)
					(*matrix)[i][j] = 1;
				if(map[i][j] == sett_map->obstacle)
					(*matrix)[i][j] = 0;
			}

	//printf("i=%d j=%d\n", i,j);	
			if(i != 0 && j != 0)
			{	
				if(map[i][j] != sett_map->obstacle)
				{
					(*matrix)[i][j] = find_min_value((*matrix)[i - 1][j], (*matrix)[i - 1][j - 1], (*matrix)[i][j - 1]) + 1;
					fill_coordinates(max_coordinates, (*matrix)[i][j], i, j);
				}
				else
					(*matrix)[i][j] = 0;
			}
		}
	}
}

void draw_square(char **map, int *max_coordinates, t_char *sett_map)
{
	int i;
	int j;

	i = -1;
	int upper_left_i;
	int upper_left_j;

	upper_left_i = max_coordinates[1] - (max_coordinates[0] - 1);
	upper_left_j = max_coordinates[2] - (max_coordinates[0] - 1);
//printf("max_coord0: %d\n", max_coordinates[0]);
//printf("max_coord1: %d\n", max_coordinates[1]);
//printf("max_coord2: %d\n", max_coordinates[2]);
	
	while (++i < sett_map->count_string)
	{
		j = -1;
		while (++j < sett_map->count_column)
		{
			if (i>= upper_left_i  && i <=  max_coordinates[1] && 
					j >= upper_left_j  && j <=  max_coordinates[2])
				map[i][j] = sett_map->full;
			write(1, &map[i][j], 1);
		}
		write(1, "\n", 1);
	}
}

void	ft_free_int(int **obj, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(obj[j]);
		j++;
	}
	free(obj);
}

void	ft_draw_max_square(char **map, t_char *sett_map)
{
	int i;
	int **matrix;
	int *max_coordinates;


	max_coordinates = malloc(sizeof(int *) * 3);
	if (max_coordinates == NULL)
		return ;
	i = -1;
//	printf("TEST1\n");
	matrix = malloc(sizeof(int *) * sett_map->count_string);
	if (matrix == NULL)
		return ;
//	printf("TEST2\n");
	while(++i < sett_map->count_string)
	{
		matrix[i] = malloc(sizeof(int) * sett_map->count_column);
		if (matrix[i] == NULL)
			return ;
	}
//	printf("TEST3\n");
	make_substacle_matrix(map,  &matrix, sett_map, &max_coordinates);
int	j;
i = 0;
j = 0;
while (i < sett_map->count_string)
{
	j = 0;
	while(j < sett_map->count_column)
	{
//printf("%d ", matrix[i][j]);
j++;
	}
	i++;
//	printf("\n");
}

//	printf("TEST4\n");
	draw_square(map, max_coordinates, sett_map);
//printf("map: %s\n", map[2]);
	i = 0;
/*	while(i < sett_map->count_string)	
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);*/
	free(max_coordinates);	
	ft_free_int(matrix, sett_map->count_string);
}

