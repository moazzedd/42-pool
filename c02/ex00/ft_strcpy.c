/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:25:24 by moazzedd          #+#    #+#             */
/*   Updated: 2022/08/11 20:01:36 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
int main()
{
	char a[] = "tjt1";
	char b[] = "thissuposetobesec";
	char c[] = "iekeoepe";
	char d[] = " " ;
	char r[] = "test1";
	char f[] = "esfg2";
	printf("%s\n",ft_strcpy(a,b));
	ft_strcpy(c,d);
	ft_strcpy(r,f);
}
