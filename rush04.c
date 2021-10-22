/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:41:25 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/23 00:37:19 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	line(int y, char r, char u, char e)
{
	int	a;

	a = 0;
	ft_putchar(r);
	while (a < y - 2)
	{
		ft_putchar(u);
		a++;
	}
	if (y > 1)
	{
		ft_putchar(e);
	}
	ft_putchar('\n');
}

void	body(int g, int k, char p)
{
	int	b;

	b = 0;
	while (b < k - 2)
	{
		line(g, p, ' ', p);
		b++;
	}
}

void	rush(int i, int j)
{
	if (i > 0 && j > 0)
	{
		line(i, 'A', 'B', 'C');
		body(i, j, 'B');
		if (j > 1)
		{
			line(i, 'C', 'B', 'A');
		}
	}
}
