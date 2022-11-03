/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:03:49 by moazzedd          #+#    #+#             */
/*   Updated: 2022/07/20 17:03:52 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	aide2(int a, int b, int c)
{
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	aide(int i)
{
	i = i + 48;
	write(1, &i, 1);
	i = i - 48;
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				aide(a);
				aide(b);
				aide(c);
				aide2(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
