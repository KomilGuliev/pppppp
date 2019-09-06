/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:21:02 by kolya             #+#    #+#             */
/*   Updated: 2019/09/05 15:24:46 by kolya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		i;

	i = 0;
	res = NULL;
	res = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
