/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:18:59 by kolya             #+#    #+#             */
/*   Updated: 2019/09/07 10:17:08 by kolya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 | nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
