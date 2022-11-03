/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:37:49 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/09 16:58:24 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	strs_len(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

int	total_lenght(int strs_len, char *sep, int size)
{
	int	sep_len;

	sep_len = ft_strlen(sep) * (size - 1);
	return (strs_len + sep_len + 1);
}

char	*ft_strcat(char *dest, char *src, int *i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[*i] = src[j];
		j++;
		*i = *i + 1;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		j;
	int		x;

	x = strs_len(strs, size);
	y = total_lenght(x, sep, size);
	if (size == 0)
		return ((char *)malloc(1));
	p = malloc(y * sizeof (char));
	i = 0;
	j = 0;
	if (!p)
		return (0);
	while (i < size)
	{
		ft_strcat(p, strs[i], &j);
		if (i < size - 1)
			ft_strcat(p, sep, &j);
		i++;
	}
	p[j] = '\0';
	return (p);
}
