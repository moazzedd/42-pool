/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:15:02 by moazzedd          #+#    #+#             */
/*   Updated: 2022/07/25 17:48:44 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0' && i < n) || (s2[j] != '\0' && i < n))
	{
		if (s1[i] > s2[j] || s1[i] < s2[j])
		{
			return (s1[i] - s2[j]);
		}
		else
		{
			i++;
			j++;
		}
	}
	return (0);
}
