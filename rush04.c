/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:41:25 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/23 00:54:01 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	line(int col, char first, char mid, char last)
{
	int	i;

	i = 0;
	ft_putchar(first);
	while (i < col - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (col > 1)
	{
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	body(int col, int row, char mid)
{
	int	j;

	j = 0;
	while (j < row - 2)
	{
		line(col, mid, ' ', mid);
		j++;
	}
}

void	rush(int col, int row)
{
	if (col > 0 && row > 0)
	{
		line(col, 'A', 'B', 'C');
		body(col, row, 'B');
		if (row > 1)
		{
			line(col, 'C', 'B', 'A');
		}
	}
}
