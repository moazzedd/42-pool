/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:46:13 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/02 02:21:37 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < x)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
