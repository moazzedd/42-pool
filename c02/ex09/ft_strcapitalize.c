/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:58:35 by moazzedd          #+#    #+#             */
/*   Updated: 2022/07/27 19:49:13 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char *str, int *i)
{
	while (str[*i] != '\0')
	{
		if (str[*i] >= 'A' && str[*i] <= 'Z')
		{
			str[*i] = str[*i] + 32;
		}
		*i = *i + 1;
	}
	*i = 0;
	return (str);
}

char	aide(char *str, int *i)
{
	if (*i == 0 && (!(str[*i] <= 'a' && str[*i] <= 'z')))
	{
		str[*i] = str [*i] - 32;
		*i = *i + 1;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			ft_strlowcase(str, &i);
		}
		aide(str, &i);
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& (! (str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (! (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
