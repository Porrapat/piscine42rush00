/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:41:25 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/23 01:23:29 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	line(int column, char left, char middle, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < column - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (column > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	body(int column, int row, char vertical_line)
{
	int	j;

	j = 0;
	while (j < row - 2)
	{
		line(column, vertical_line, ' ', vertical_line);
		j++;
	}
}

void	rush(int column, int row)
{
	char	top_left;
	char	top_right;
	char	bottom_left;
	char	bottom_right;

	top_left = 'A';
	top_right = 'C';
	bottom_left = 'C';
	bottom_right = 'A';
	if (column > 0 && row > 0)
	{
		line(column, top_left, 'B', top_right);
		body(column, row, 'B');
		if (row > 1)
		{
			line(column, bottom_left, 'B', bottom_right);
		}
	}
}
