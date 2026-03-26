/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kewang <kewang@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 19:31:00 by kewang            #+#    #+#             */
/*   Updated: 2026/03/08 19:45:45 by kewang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
		return ;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar('/');
			else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
				ft_putchar('\\');
			else if ((row == 0 || row == y - 1) || (col == 0 || col == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}
