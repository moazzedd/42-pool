/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:32:15 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/01 20:52:32 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			j++;
			if (j > 1)
				return (0);
		}
		i++;
	}
	if (j == 1)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = nb;
	j = 0;
	y = 0;
	if (nb >= 2147483640)
		return (2147483647);
	if (nb < 2)
		return (2);
	while (i)
	{
		x = ft_is_prime(i);
		if (x == 1)
			return (i);
		else
			i++;
	}
	return (i);
}
