/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:00:48 by kolya             #+#    #+#             */
/*   Updated: 2019/09/07 10:45:48 by kolya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	readfile(char *filename)
{
	char	buff[1025];
	int		ret;
	int		file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return ;
	if (file > 0)
	{
		while ((ret = read(file, buff, 1024)))
		{
			buff[ret] = '\0';
			ft_putstr(buff);
		}
	}
	close(file);
}

int		main(int ac, char **av)
{
	if (ac <= 1)
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	if (ac == 2)
	{
		readfile(av[1]);
	}
	return (0);
}
