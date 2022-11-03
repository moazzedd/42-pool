/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:20:37 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/09 16:53:30 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*p;

	size = max - min ;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = p;
	i = 0;
	while (i < size)
	{
		p[i] = min + i;
		i++;
	}
	return (size);
}
