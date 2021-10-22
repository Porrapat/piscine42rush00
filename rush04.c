/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:41:25 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/22 23:46:49 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	firstline(int y)
{
	int	a;

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
	int	a;

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
	int	a;
	int	b;

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
	if (i > 0 && j > 0)
	{
		firstline(i);
		body(i, j);
		if (j > 1)
		{
			lastline(i);
		}
	}
}
