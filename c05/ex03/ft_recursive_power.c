/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:07:04 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/02 13:22:23 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else if (power == 0 || nb == 1)
		return (1);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
