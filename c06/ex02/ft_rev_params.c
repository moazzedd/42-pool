/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:08:19 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/03 19:02:34 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	if (ac > 1)
	{
		while (j >= 1)
		{
			while (i < ft_strlen(av[j]))
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
			i = 0;
		}
	}
}
