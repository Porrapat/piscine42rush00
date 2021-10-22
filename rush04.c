/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:41:25 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/22 23:18:54 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	firstline(int y)
{
	int a;

	a = 0;
	ft_putchar('A');
	while (a < y - 2)
	{
		ft_putchar('B');
		a++;
	}
	if (y > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	lastline(int z)
{
	int a;

	a = 0;
	ft_putchar('C');
	while (a < z - 2)
	{
		ft_putchar('B');
		a++;
	}
	if (z > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	body(int g, int k)
{
	int a;
	int b;

	b = 0;
	while (b < k - 2)
	{
		ft_putchar('B');
		a = 0;
		while (a < g - 2)
		{
			ft_putchar(' ');
			a++;
		}
		if (g > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		b++;
	}
}

void	rush(int i, int j)
{
	firstline(i);
	body(i,j);
	if (j > 1)
	{
		lastline(i);
	}
}


int	main(void)
{
	rush(5, 5);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
