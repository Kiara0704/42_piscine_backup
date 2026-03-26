/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenor <amenor@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:54:53 by amenor            #+#    #+#             */
/*   Updated: 2026/03/08 18:54:55 by amenor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush(int n, int m)
{
	int	col;
	int	row;

	row = 0;
	if (n <= 0 || m <= 0 || n > 2147483647 || m > 2147483647)
		return ;
	while (row < m)
	{
		col = 0;
		while (col < n)
		{
			if ((row == 0 && col == 0) || (row == m - 1 && col == n - 1))
				ft_putchar('/');
			else if ((row == 0 && col == n - 1) || (row == m - 1 && col == 0))
				ft_putchar('\\');
			else if ((row == 0 || row == m - 1) || (col == 0 || col == n - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}
