/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:20:24 by moazzedd          #+#    #+#             */
/*   Updated: 2022/07/23 13:47:37 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	t;

	i = 0;
	x = 1;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - x];
		tab[size - x] = t;
		x++;
		i++;
	}
}
