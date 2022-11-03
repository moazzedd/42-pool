/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 02:32:55 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/06 23:30:14 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;
	int	x;
	int	m;

	i = max - min;
	x = 0;
	m = min;
	p = malloc(i * sizeof(int));
	if (p == NULL)
	{
		return (0);
	}
	else if (min >= max)
		return (0);
	while (m < max)
	{
		p[x] = m;
		m++;
		x++;
	}
	return (p);
}
