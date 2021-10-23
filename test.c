/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slertpim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:34:33 by slertpim          #+#    #+#             */
/*   Updated: 2021/10/23 01:30:28 by slertpim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	rush(int column, int row);

int main(void) 
{
	int column;
	int row;

	for (column = -1; column <= 5; column++) 
	{
		for (row = -1; row <= 5; row++) 
		{
			printf("(%d, %d)\n", column, row);
			rush(column, row);
			printf("\n");
		}
	}
}
