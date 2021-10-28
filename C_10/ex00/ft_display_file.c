/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:18:46 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/07 10:41:40 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *src)
{
	while (*src != '\0')
	{
		write(1, src, 1);
		src++;
	}
}

void	ft_ret(int fd)
{
	int		ret;
	char	buf[4097];

	ret = read(fd, buf, 4096);
	while (ret != 0)
	{
		if (ret < 4097)
			buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, 4096);
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (2);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (3);
	}
	ft_ret(fd);
	return (close(fd));
}
