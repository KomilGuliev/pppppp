/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:49:55 by kolya             #+#    #+#             */
/*   Updated: 2019/09/06 18:43:17 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				swap = av[j];
				av[j] = av[j + 1];
				av[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	ft_sort_params(ac, av);
	while (ac > i)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
