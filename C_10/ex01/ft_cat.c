/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:55:41 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/05 21:09:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	char	buf[30];
	int		k;

	while (1)
	{
		k = read(0, buf, sizeof(buf));
		write(1, buf, k);
	}
}
