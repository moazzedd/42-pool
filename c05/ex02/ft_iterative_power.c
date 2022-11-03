/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:07:19 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/01 20:49:43 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb = nb * x;
			i++;
		}
	}
	return (nb);
}
