/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:14:56 by kolya             #+#    #+#             */
/*   Updated: 2019/09/06 18:12:24 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		str[i] = *s;
		i++;
	}
	str[i] = '\0';
	return (str);
}
